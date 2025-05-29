/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:49:21 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/13 09:51:32 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

int main()
{
    char src[] = "Hello, World!";
    char dest[20];   
    unsigned int len;

    printf("Length of source: %d\n", ft_strlcpy(dest, src, 8));
    
    return 0;
}

