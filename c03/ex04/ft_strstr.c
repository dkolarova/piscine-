/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:07:35 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/15 09:42:11 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*sub;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start = str;
		sub = to_find;
	}
	while (*str && *sub && *str == *sub)
		{
			str++;
			sub++;
		}
	if (*sub == '\0')
		return (start);
		str = start + 1;
	return (NULL);
}

int main() {
    char str[] = "Hello, world!";
    char to_find[] = "world";

    char *result = ft_strstr(str, to_find);

    if (result) {
        printf("Found '%s' at position: %ld\n", to_find, result - str);
    } else {
        printf("'%s' not found.\n", to_find);
    }

    return 0;
}

