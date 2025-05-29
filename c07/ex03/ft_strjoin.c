/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:32:14 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/24 15:31:54 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	return (len + (size - 1) * ft_strlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (size == 0)
		return ((char *)malloc(1));
	res = malloc(total_len(size, strs, sep) + 1);
	if (!res)
		return (NULL);
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			res[j++] = strs[i][k++];
		k = 0;
		while (i < size - 1 && sep[k])
			res[j++] = sep[k++];
		i++;
	}
	res[j] = '\0';
	return (res);
}
/*
int	main(void)
{
	char *strs[] = {"hola", "todos", "amigos"};
	char *sep = ".";
	int size = 3;
	char *result;

	result = ft_strjoin(size, strs, sep);
	printf("%s", result);
}
*/	
