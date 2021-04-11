/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:14:32 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/11 13:22:58 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int tab[2];

	tab[0] = -1;
	while (tab[0] < 98)
	{
		tab[0]++;
		tab[1] = tab[0];
		while (tab[1] < 99)
		{
			tab[1]++;
			ft_putchar((tab[0] / 10) + 48);
			ft_putchar((tab[0] % 10) + 48);
			ft_putchar(' ');
			ft_putchar((tab[1] / 10) + 48);
			ft_putchar((tab[1] % 10) + 48);
			if (tab[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
