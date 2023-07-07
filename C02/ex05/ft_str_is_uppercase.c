/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:04:03 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/31 12:31:18 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	if (ft_str_is_uppercase("AAA") == 1)
	{
		printf("%s\n", "yes is 1");
	}
	else
	{
		printf("%s\n", "not 1");
	}
	if (ft_str_is_uppercase("123") == 0)
	{
		printf("%s\n", "yes is 0");
	}
	else
	{
		printf("%s\n", "not 0");
	}
	return (0);
}*/
