/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                                            */
/*   Created: 2025/04/12 13:16:59 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/13 19:03:45 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include <stddef.h>

char	*ft_strcapitalize(char *str)
{
	size_t	i;
	size_t	new_word;

	new_word = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !new_word)
			str[i] = str[i] + 32;
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "hello, how are you?";
	char	str2[] = "42words forty-two; fifty+and+one";

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s", ft_strcapitalize(str2));

	return (0);
}
*/
