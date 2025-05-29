/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:45:39 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/24 11:09:01 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copp;

	i = 0;
	while (src[i])
		i++;
	copp = (char *)malloc(sizeof(char) * (i + 1));
	if (!copp)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copp[i] = src[i];
		i++;
	}
	copp[i] = '\0';
	return (copp);
}
/*
int	main(void)
{
	char *original = "Holis";
	char *coppy;

	coppy = ft_strdup(original);
	printf("%s", coppy);
}
*/
