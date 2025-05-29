/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fholfeld <fholfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 21:17:30 by fholfeld          #+#    #+#             */
/*   Updated: 2025/04/20 21:48:24 by fholfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		grid_size(char *input);
int		*parse(char *input, int size);
int		**make_grid(int size);
int		puzzle_solve(int **grid, int *vis, int *coord, int size);
void	print_arr(int **grid, int size);
void	free_grid(int **grid, int size);

/*Here is an example of intended input/output for a valid set.
./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$

Correct Input Example:
"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
"3 2 2 2 1 1 4 3 2 2 5 2 3 4 1 1 2 2 2 2"
"1 3 3 2 2 4 4 3 1 3 2 2 1 4 2 2 3 3 3 2 2 2 1 3"*/

int	main(int argc, char **argv)
{
	int	size;
	int	*vis;
	int	**grid;
	int	coord[2];

	if (argc != 2)
		return (write(1, "Error\n", 6), 1);
	size = grid_size(argv[1]);
	if (size == -1)
		return (write(1, "Error\n", 6), 1);
	vis = parse(argv[1], size);
	if (!vis)
		return (write(1, "Error\n", 6), 1);
	grid = make_grid(size);
	if (!grid)
		return (free(vis), write(1, "Error\n", 6), 1);
	coord[0] = 0;
	coord[1] = 0;
	if (puzzle_solve(grid, vis, coord, size))
		print_arr(grid, size);
	else
		write(1, "Error\n", 6);
	free_grid(grid, size);
	free(vis);
	return (0);
}
