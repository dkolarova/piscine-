/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:43:41 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/14 10:09:56 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_digits[(unsigned char) c / 16]);
	ft_putchar(hex_digits[(unsigned char) c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_print_hex(str[i]);
		i++;
	}
}

int main(void)
{
    char test[] = "Hello\nHow are you?\tGood.";
    ft_putstr_non_printable(test);
    return (0);
}

