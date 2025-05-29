/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:59:31 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/23 14:26:08 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	while (arv[0][i] != '\0' && arc > 0)
	{
		write (1, &arv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
