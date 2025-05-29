/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:03:15 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/13 15:25:11 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));  // 0
	printf("%d\n", ft_strcmp("apple", "banana")); // negative value
	printf("%d\n", ft_strcmp("zebra", "apple"));  // positive value
	return 0;
}
*/
