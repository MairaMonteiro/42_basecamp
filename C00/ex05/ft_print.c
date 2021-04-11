/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:14:37 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/11 17:04:47 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char lu;
	char li;
	char ze;

	lu = '0' - 1;
	while (lu < '7')
	{
		li = ++lu;
		while (li < '8')
		{
			ze = ++li;
			while (ze < '9')
			{
				ze++;
				ft_putchar(lu);
				ft_putchar(li);
				ft_putchar(ze);
				if (lu != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
