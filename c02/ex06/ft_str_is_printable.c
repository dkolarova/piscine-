/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:55:58 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/12 12:03:00 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello World!"));  // 1 
	printf("%d\n", ft_str_is_printable("Hello\tWorld"));  // 0 
	printf("%d\n", ft_str_is_printable("Hello\nWorld"));  // 0 
	printf("%d\n", ft_str_is_printable("1234!@#$"));      // 1 
	printf("%d\n", ft_str_is_printable(""));              // 1 
	return (0);
}	
*/
