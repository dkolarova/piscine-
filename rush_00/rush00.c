/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krybalce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:29:57 by krybalce          #+#    #+#             */
/*   Updated: 2025/04/13 13:45:14 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> */

void	ft_putchar(char c);

void	ft_print_line(int width, char left, char middle, char right)
{
	int	i;

	if (width < 0)
		return ;
	ft_putchar(left);
	i = 0;
	while (i < width - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (i >= 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	ft_print_line(x, 'o', '-', 'o');
	i = 2;
	while (i < y)
	{
		ft_print_line(x, '|', ' ', '|');
		i++;
	}
	if (y > 1)
		ft_print_line(x, 'o', '-', 'o');
}
