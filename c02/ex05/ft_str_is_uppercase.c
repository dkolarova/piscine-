/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:48:57 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/12 11:55:19 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_uppercase("HELLO"));      // 1
	printf("%d\n", ft_str_is_uppercase("HELLO123"));   // 0
	printf("%d\n", ft_str_is_uppercase("hello"));      // 0
	printf("%d\n", ft_str_is_uppercase("1234"));       // 0
	printf("%d\n", ft_str_is_uppercase(""));           // 1 (empty string)
	return (0);
}
*/
