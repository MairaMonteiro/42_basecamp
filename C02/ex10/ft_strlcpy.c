/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:01:59 by mmonteir          #+#    #+#             */
/*   Updated: 2021/04/16 21:47:09 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < size - 1) && (size != 0))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != '\0')
	{
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
