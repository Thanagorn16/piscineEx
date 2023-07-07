/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:33:39 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/04 17:40:23 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*int	main(void)
{
	int	*i;
	int	j;
	int	a;
	int	b;

	a = 5;
	b = 10;
	i = ft_range(a, b);
	j = 0;
	while (j < b - a)
	{
		printf("%d", i[j]);
		j++;
	}
	return (0);
}*/
