/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:38:09 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/14 12:39:49 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	srand(1);
	counter = 0;
	tab = calloc(10, sizeof(int));
	while (counter < 10)
	{
		tab[counter] = rand() % 100;
		counter++;
	}
	counter = -1;
	while (9 > counter++)
	{
		printf("%d ", tab[counter]);
	}
	ft_sort_int_tab(tab, 10);
	printf("%c", '\n');
	counter = -1;
	while (9 > counter++)n
	{
		printf("%d ", tab[counter]);
	}
	printf("%c", '\n');
	return (0);
}
