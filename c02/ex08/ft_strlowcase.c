/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:55:57 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/12 13:14:15 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include <stddef.h>

char	*ft_strlowcase(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[] = "HELLO YOU";
	char str2[] = "HOW ARE YOU";
	
	printf("%s\n", ft_strlowcase(str1));  // "hello you"
	printf("%s", ft_strlowcase(str2));    // "how are you"
	
	return (0);
}
*/
