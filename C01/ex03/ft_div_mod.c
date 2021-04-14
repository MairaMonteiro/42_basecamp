/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:16:56 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/14 01:23:04 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != '0')
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main(void)
{
    int a  = 5;
    int b  = 2;
    int *div = &a;
    int *mod = &b;

    ft_div_mod(a, b, div, mod);

    printf("Value of a is : %d", *div);
    printf("\nValue of b is : %d",*mod);
}
