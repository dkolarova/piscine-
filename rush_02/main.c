/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkolarov <dkolarov@dkolarov@student.4      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:07:13 by dkolarov          #+#    #+#             */
/*   Updated: 2025/04/26 12:49:44 by dkolarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	t_dict_entry *dict;
	int	entry_count;
	char	*dict_file;
	char	*number;

	if (argc == 2)
	{
		dict_file = "numbers.dict"; //dictionary file
		number = argv[1];
	}
	else if (argc == 3)
	{
		dict_file = argv[1]; // user given dictionary file and num
		number = argv[2];
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}	
	if (!is_valid_number(number))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	//open and read the dic file, also tell how manu entries were found
	dict = parse_dict(dict_file, &entry_count);
	if(!dict)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	//it takes the num, look up it's word representation in dic, and print the result:)
	convert_number(dict, entry_count, number);
	free_dict(dict, entry_count);

	return (0);
}
