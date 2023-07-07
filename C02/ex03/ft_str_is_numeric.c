/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:28:51 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/31 12:28:50 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	if (ft_str_is_numeric("123") == 1)
	{
		printf("%s\n", "yes is 1");
	}
	else
	{
		printf("%s\n", "no");
	}
	if (ft_str_is_numeric("asd") == 0)
	{
		printf("%s\n", "yes is 0");
	}
	return (0);
}*/
