/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yminashk <yminashk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:32:55 by yminashk          #+#    #+#             */
/*   Updated: 2025/04/20 18:33:10 by yminashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	vis_top(int **grid, int col, int size);
int	vis_bot(int **grid, int col, int size);
int	vis_left(int **grid, int row, int size);
int	vis_right(int **grid, int row, int size);
int	exist_in_row(int **grid, int row, int val, int size);
int	exist_in_col(int **grid, int col, int val, int size);
int	col_complete(int **grid, int row, int size);
int	row_complete(int **grid, int col, int size);

/* 
 * This function checks whether the grid satisfies the visibility constraints
 * for all rows and columns.
 * It verifies that the visibility counts for each row and column match the
 * values provided by the `vis` array.

*/
int	partial_check(int **grid, int *vis, int size)
{
	int	i;
	int	j;
	int	offset;

	i = 0;
	while (i < 4)
	{
		offset = size * i;
		j = 0;
		while (j < size)
		{
			if (i == 0 && vis_top(grid, j, size) != vis[j + offset])
				return (0);
			if (i == 1 && vis_bot(grid, j, size) != vis[j + offset])
				return (0);
			if (i == 2 && vis_left(grid, j, size) != vis[j + offset])
				return (0);
			if (i == 3 && vis_right(grid, j, size) != vis[j + offset])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// Function to check the validity of values in rows and columns
int	check_validity(int **grid, int *vis, int *coord, int size)
{
	int	valid;
	int	row;
	int	col;

	row = coord[0];
	col = coord[1];
	valid = 1;
	if (col == size - 1 && row_complete(grid, row, size))
	{
		if (vis_left(grid, row, size) != vis[2 * size + row]
			|| vis_right(grid, row, size) != vis[3 * size + row])
			valid = 0;
	}
	if (row == size - 1 && col_complete(grid, col, size))
	{
		if (vis_top(grid, col, size) != vis[col]
			|| vis_bot(grid, col, size) != vis[size + col])
			valid = 0;
	}
	return (valid);
}

int	puzzle_solve(int **grid, int *vis, int *coord, int size);

// Attempts to place valid values in the current cell and proceeds recursively
int	try_values(int **grid, int *vis, int *coord, int size)
{
	int	val;
	int	valid;
	int	row;
	int	col;
	int	next[2];

	row = coord[0];
	col = coord[1];
	val = 1;
	next[0] = row + (col + 1) / size;
	next[1] = (col + 1) % size;
	while (val <= size)
	{
		if (!exist_in_row(grid, row, val, size)
			&& !exist_in_col(grid, col, val, size))
		{
			grid[row][col] = val;
			valid = check_validity(grid, vis, coord, size);
			if (valid && puzzle_solve(grid, vis, next, size))
				return (1);
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}

// Recursively solves the puzzle grid cell by cell
int	puzzle_solve(int **grid, int *vis, int *coord, int size)
{
	int	row;
	int	col;

	row = coord[0];
	col = coord[1];
	if (row == size)
		return (partial_check(grid, vis, size));
	return (try_values(grid, vis, coord, size));
}
