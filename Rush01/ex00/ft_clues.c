/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clues.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:10:56 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/12 02:29:00 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_clues01(char board[6][6])
{
	int i;
	int j;
	
	i = 0;
	while (i <= 3) 
	{
		j = 0;
		while (j <= 3) 
		{
			if(board[0][j] == '4')
			{
				if (board[5][j] == '1')
				{
					board[1][j] = '1';
					board[2][j] = '2';
					board[3][j] = '3';
					board[4][j] = '4';
				}
			}
		}
	}
}

void	ft_clues02(char board[6][6])
{
	int i;
	int j;

	i = 0;
	while (i <= 3) 
	{
		j = 0;
		while (j <= 3) 
		{
			if(board[0][j] == '1')
			{
				if (board[5][j] == '4')
				{
					board[1][j] = '1';
					board[2][j] = '2';
					board[3][j] = '3';
					board[4][j] = '4';
				}
			}
		}
	}
}

void	ft_clues03(char board[6][6])
{
	int i;
	int j;
	j = 0;
	while (j <= 3) 
	{
		i = 0;
		while (i <= 3) 
		{
			if(board[i][5] == '1')
			{
				if (board[i][0] == '4')
				{
					board[1][j] = '1';
					board[2][j] = '2';
					board[3][j] = '3';
					board[4][j] = '4';
				}
			}
		}
	}
}

void	ft_clues04(char board[6][6])
{
	int i;
	int j;
	j = 0;
	while (j <= 3) 
	{
		i = 0;
		while (i <= 3) 
		{
			if(board[i][0] == '1')
			{
				if (board[i][5] == '4')
				{
					board[1][j] = '1';
					board[2][j] = '2';
					board[3][j] = '3';
					board[4][j] = '4';
				}
			}
		}
	}
}

void	ft_clues(void)
{
	char board[6][6] = {{'2', '4', '3', '2', '1', '2'}, {'2', '1', '2', '2', '2', '2'},
	{'2', '4', '3', '2', '1', '2'},
	{'2', '4', '3', '2', '1', '2'},
	{'2', '4', '3', '2', '1', '2'},
	{'2', '1', '2', '2', '2', '2'}};
	printf("%s ", board[3][1]);
	// ft_clues01(board);
	// ft_clues02(board);
	// ft_clues03(board);
	// ft_clues04(board);


	// for(int i = 0; i < 6; i++)
	// {
	// 	for(int j = 0; j < 6; j++)
	// 	{
    //         printf("%c ", board[i][j]);      
	// 	}
	// 	printf("\n");
    // }
}
