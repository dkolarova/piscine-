/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:26:57 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/12 11:37:31 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("123456"));     // 1
	printf("%d\n", ft_str_is_numeric("00123"));      // 1
	printf("%d\n", ft_str_is_numeric("123abc"));     // 0
	printf("%d\n", ft_str_is_numeric(""));		 // 1
}
*/
