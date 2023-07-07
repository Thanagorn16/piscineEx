/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:22:48 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/28 09:39:15 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (i != 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		if (str[i] == ' ')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "saluT, CommenT tU VAS ? 42moTS quArante-deuX; cinquante+et+uN";
	int	i;

	i = 0;
	ft_strcapitalize(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}*/
