/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yminashk <yminashk@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:53:32 by yminashk          #+#    #+#             */
/*   Updated: 2025/04/20 17:53:56 by yminashk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		print_char(str[i]);
		i++;
	}
}

/*
 * This function prints a 2D array (square grid) of integers 
 * to the standard output
 */
void	print_arr(int **arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			print_char(arr[i][j] + '0');
			if (j < size - 1)
				print_char(' ');
			j++;
		}
		print_char('\n');
		i++;
	}
}
