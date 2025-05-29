/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:54:03 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/24 16:11:59 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}

int	get_base_size(char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	result[100];
	long	nb;
	int		i;
	int		base_size;

	if (!check_base(base))
		return ;
	base_size = get_base_size(base);
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		return (ft_putchar(base[0]));
	i = 0;
	while (nb > 0)
	{
		result[i++] = base[nb % base_size];
		nb /= base_size;
	}
	while (--i >= 0)
		ft_putchar(result[i]);
}

int main(void)
{
    ft_putnbr_base(42, "01");
    write(1, "\n", 1);

    ft_putnbr_base(255, "0123456789ABCDEF");
    write(1, "\n", 1);
    
    return (0);
}

