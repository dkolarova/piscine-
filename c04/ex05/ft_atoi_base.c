/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:28:58 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/16 12:43:58 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_whitespace(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	get_base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_len;
	int	value;

	result = 0;
	sign = 1;
	if (!is_valid_base(base))
		return (0);
	while (is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	base_len = get_base_len(base);
	value = base_index(*str, base);
	while (value != -1)
	{
		result = result * base_len + value;
		str++;
		value = base_index(*str, base);
	}
	return (result * sign);
}
/*
int main() {
    char *str = "   -1011";
    char *base = "01";  // Binary base
    int result = ft_atoi_base(str, base);
    printf("Result: %d\n", result);  // -11 (binary)
 
    char *hex = "  1F";
    char *hex_base = "0123456789ABCDEF";  // Hexadecimal base
    result = ft_atoi_base(hex, hex_base);
    printf("Result: %d\n", result);  //31 (hexadecimal 1F = 31 in decimal)
    
    return 0;
}*/
