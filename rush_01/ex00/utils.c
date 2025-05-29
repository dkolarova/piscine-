/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:04:22 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/20 18:15:09 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	grid_size(char *str)
{
	int	i;
	int	count;
	int	size;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			count++;
		else if (str[i] != ' ')
			return (-1);
		i++;
	}
	if (count == 0 || count % 4 != 0 || count > 36)
		return (-1);
	size = count / 4;
	return (size);
}

int	*parse(char *str, int size)
{
	int	i;
	int	j;
	int	*vis;

	i = 0;
	j = 0;
	vis = malloc(sizeof(int) * 4 * size);
	if (!vis)
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if (str[i] >= '1' && str[i] <= '9')
			vis[j++] = str[i++] - '0';
		else
			return (free(vis), NULL);
	}
	return (vis);
}

int	**make_grid(int size)
{
	int	**grid;
	int	i;
	int	j;

	grid = malloc(sizeof(int *) * size);
	if (!grid)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		grid[i] = malloc(sizeof(int) * size);
		if (!grid[i])
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		j = -1;
		while (++j < size)
			grid[i][j] = 0;
	}
	return (grid);
}

void	free_grid(int **grid, int size)
{
	int	i;

	if (!grid)
		return ;
	i = 0;
	while (i < size)
	{
		if (grid[i])
			free(grid[i]);
		i++;
	}
	free(grid);
}
