/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:07:38 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/26 12:33:14 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parse input + parse dictionary + map nums to words + handle errors + free memory*/

#include <unistd.h>
#include <stdlib.h>

typedef	struct s_dict_entry
{
	char	*number;
	char	*word;
} t_dict_entry;

//utils
int	ft_strlen(char *str);
char	*ft_strdup(char *src);
char 	*ft_strim(char *src);
int	ft_strcmp(char *s1, char *s2);
int	is_valid_number(char *str);

//parse_dict.c parse the dictionary file and return an array of t_dict_entry

//convert_number.c  (*dict => is a pointer to the first element of the array of t_dict_entry struct)
void	convert_number(t_dict_entry *dict, int entry_count, char *number);

//free.c
void	free_dict(t_dict_entry *dict, int entry_count);
