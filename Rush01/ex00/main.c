/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 12:46:00 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/12 00:34:00 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

_Bool	ft_validate_input(int arg_count, char *input[]);
char	*ft_create_game_board(char *input[]);
//char	ft_clues(char *game_board);

int		main(int argc, char *argv[])
{
	char *pont;
	_Bool result;
	
	result = ft_validate_input(argc, argv);
	if (result == 0)
	{
		return (0);
	}
	pont = ft_create_game_board(argv);
	return (0);
}
