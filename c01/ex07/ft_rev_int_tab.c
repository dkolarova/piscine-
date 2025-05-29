/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:16:39 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/10 13:24:55 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = sizeof(arr) / sizeof(arr[0]);
	int	i;

	printf("Original array:\n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	ft_rev_int_tab(arr, size);

	printf("Reversed array:\n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return (0);
}
