/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:24:29 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/31 12:32:30 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			index = 1;
		else
		{
			index = 0;
			return (0);
		}
		i++;
	}
	if (str[0] == '\0')
		index = 1;
	return (index);
}

/*int	main(void)
{
	if (ft_str_is_printable("asd!ASF1123 asd") == 1)
	{
		printf("%s\n", "yes is 1");
	}
	else
	{
		printf("%s\n", "not 1");
	}
	if (ft_str_is_printable("123") == 0)
	{
		printf("%s\n", "asd!ASF1123 asd");
	}
	else
	{
		printf("%s\n", "not 0");
	}
	return (0);
}*/
