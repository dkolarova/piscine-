/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   latin_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:49:57 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/20 17:50:01 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	exist_in_row(int **grid, int row, int val, int size)
{
	int	col;

	col = 0;
	while (col < size)
	{
		if (grid[row][col] == val)
			return (1);
		col++;
	}
	return (0);
}

int	exist_in_col(int **grid, int col, int val, int size)
{
	int	row;

	row = 0;
	while (row < size)
	{
		if (grid[row][col] == val)
			return (1);
		row++;
	}
	return (0);
}

int	row_complete(int **grid, int col, int size)
{
	int	row;

	row = 0;
	while (row < size)
	{
		if (grid[row][col] == 0)
			return (0);
		row++;
	}
	return (1);
}

int	col_complete(int **grid, int row, int size)
{
	int	col;

	col = 0;
	while (col < size)
	{
		if (grid[row][col] == 0)
			return (0);
		col++;
	}
	return (1);
}
