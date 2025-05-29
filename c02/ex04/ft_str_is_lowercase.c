/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:38:37 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/12 11:48:08 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcdefg"));   // 1
	printf("%d\n", ft_str_is_lowercase("hello"));     // 1
	printf("%d\n", ft_str_is_lowercase("HELLO"));     // 0
	printf("%d\n", ft_str_is_lowercase("123abc"));    // 0
	printf("%d\n", ft_str_is_lowercase(""));          // 1 (empty string)
}
*/
