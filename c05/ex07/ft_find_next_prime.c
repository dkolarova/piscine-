/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:19:49 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/21 10:40:38 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	if (nb <= 2)
		return (2);
	while (1)
	{
		is_prime = 1;
		i = 2;
		while (i <= nb / i)
		{
			if (nb % i == 0)
			{
				is_prime = 0;
				break ;
			}
			i++;
		}
		if (is_prime)
			return (nb);
		nb++;
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(4));
}
*/
