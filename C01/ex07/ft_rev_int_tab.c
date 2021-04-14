/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:37:51 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/13 18:55:42 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int array[size];
	int i;
	int j;

	i = size - 1;
	j = 0;
	while (i >= 0)
	{
		array[j] = tab[i];
		j++;
		i--;
	}
	j = 0;
	while (j < size)
	{
		tab[j] = array[j];
		j++;
	}
}
