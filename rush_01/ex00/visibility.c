/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yminashk <yminashk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:02:09 by yminashk          #+#    #+#             */
/*   Updated: 2025/04/20 18:02:32 by yminashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

/*  
* Function to count the number of visible buildings from the start of a 
* row/column
* A building is visible if it is taller than any previously seen buildings
*/
int	vis_count(int *line, int size)
{
	int	count;
	int	max;
	int	i;

	count = 1;
	max = line[0];
	i = 1;
	while (i < size)
	{
		if (line[i] > max)
		{
			count++;
			max = line[i];
		}
		i++;
	}
	return (count);
}

/*
* Function to calculate the visibility from the top of a column
* It checks the visibility of buildings in the column from top to bottom
*/
int	vis_top(int **grid, int col, int size)
{
	int	*line;
	int	i;
	int	result;

	i = 0;
	line = (int *)malloc(sizeof(int) * size);
	if (!line)
		return (-1);
	while (i < size)
	{
		line[i] = grid[i][col];
		i++;
	}
	result = vis_count(line, size);
	free(line);
	return (result);
}

/*
* Function to calculate the visibility from the bottom of a column
* It checks the visibility of buildings in the column from bottom to top
*/
int	vis_bot(int **grid, int col, int size)
{
	int	*line;
	int	i;
	int	result;

	i = 0;
	line = (int *)malloc(sizeof(int) * size);
	if (!line)
		return (-1);
	while (i < size)
	{
		line[i] = grid[size - 1 - i][col];
		i++;
	}
	result = vis_count(line, size);
	free(line);
	return (result);
}

/*
* Function to calculate the visibility from the left of a row
* It checks the visibility of buildings in the row from left to right
*/
int	vis_left(int **grid, int row, int size)
{
	int	*line;
	int	i;
	int	result;

	i = 0;
	line = (int *)malloc(sizeof(int) * size);
	if (!line)
		return (-1);
	while (i < size)
	{
		line[i] = grid[row][i];
		i++;
	}
	result = vis_count(line, size);
	free(line);
	return (result);
}

/* 
* Function to calculate the visibility from the right of a row.
* It checks the visibility of buildings in the row from right to left. 
*/
int	vis_right(int **grid, int row, int size)
{
	int	*line;
	int	i;
	int	result;

	i = 0;
	line = (int *)malloc(sizeof(int) * size);
	if (!line)
		return (-1);
	while (i < size)
	{
		line[i] = grid[row][size - 1 - i];
		i++;
	}
	result = vis_count(line, size);
	free(line);
	return (result);
}
