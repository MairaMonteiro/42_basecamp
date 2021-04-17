/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:53:34 by jjonteir          #+#    #+#             */
/*   Updated: 2021/04/16 17:44:25 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	var;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		var = str[j];
		if (i == 0 && (var >= 97 && var <= 122))
		{
			str[j] = var - 32;
			i++;
		}
		else if (i > 0 && (var >= 65 && var <= 90))
			str[j] = var + 32;
		else if ((var < 48) || (var > 57 && var < 65)
			|| (var > 90 && var < 97) || (var > 122))
			i = 0;
		else
			i++;
		j++;
	}
	return (str);
}
