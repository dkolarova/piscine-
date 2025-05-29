/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:26:05 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/10 16:38:43 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {9, 5, 3, 7, 1};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	printf("Before sort:\n");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("After sort:\n");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return (0);
}

