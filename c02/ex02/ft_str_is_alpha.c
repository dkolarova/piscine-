/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:53:15 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/13 09:58:08 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("")); // 1
	printf("%d\n", ft_str_is_alpha("Hello")); // 1
	printf("%d\n", ft_str_is_alpha("Hello123")); // 0
	printf("%d\n", ft_str_is_alpha("1234")); // 0
	printf("%d\n", ft_str_is_alpha("abcdefg")); // 1
	return (0);
}
*/
