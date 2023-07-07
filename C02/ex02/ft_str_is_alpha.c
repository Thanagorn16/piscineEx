/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:52:44 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/31 12:28:01 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			index = 1;
		else if (str[i] >= 'a' && str[i] <= 'z')
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
	if (ft_str_is_alpha("") == 1)
	{
		printf("%s\n", "yes is 1");
	}
	else
	{
		printf("%s\n", "no");
	}
	if (ft_str_is_alpha("ssdf2dsf") == 0)
	{
		printf("%s\n", "yes is 0");
	}
	return (0);
}*/
