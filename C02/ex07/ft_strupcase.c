/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:55:14 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/31 12:33:37 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strupcase(char *str)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (*str);
}

/*int	main(void)
{
	int	i;
	char	str[] = "123ggg!@#$%$";


	i = 0;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/
