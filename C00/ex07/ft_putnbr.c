/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:30:26 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/11 13:22:08 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int lu;

	lu = nb;
	if (lu < 0)
	{
		lu = -lu;
		ft_putchar('-');
	}
	if (lu >= 10)
	{
		ft_putnbr(lu / 10);
		ft_putnbr(lu % 10);
	}
	if (lu >= 0 && lu < 10)
	{
		ft_putchar(lu + '0');
	}
}
