/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game_board.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:13:22 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/12 01:00:34 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_create_game_board(char *input[])
{
	char static game_board[6][6];
	int line_spot;
	int column_spot;
	int i;	
	
	i = 0;
	input++;
	line_spot = -1;
	while (line_spot++ < 5)
	{
		column_spot = 0;
		while (column_spot++ < 4)
		{
			game_board[line_spot][column_spot] = *(*input + i);
			i += 2;
		}
		line_spot += 4;
	}
	column_spot = -1;
	while (column_spot++ < 5)
	{
		line_spot = 0;
		while (line_spot++ < 4)
		{
			game_board[line_spot][column_spot] = *(*input + i);
			i += 2;
		}
		column_spot += 4;
	}
	return (**&game_board);
}
