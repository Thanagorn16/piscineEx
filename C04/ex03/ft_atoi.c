/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:50:46 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/02 19:19:54 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

int	ft_atoi(char *str)
{
	int	index;
	int	m;
	int	num;

	index = 0;
	m = 1;
	num = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			m *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = (str[index] - '0') + (num * 10);
		index++;
	}
	return (num * m);
}

/*int	main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/
