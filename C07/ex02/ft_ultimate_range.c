/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:43:04 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/04 14:47:03 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	arr[i] = '\0';
	*range = arr;
	return (i);
}

/*int	main(void)
{
	int	j;
	int	a;
	int	b;
	int	*range;
	int	size;

	a = 5;
	b = 10;
	size = b - a;
	ft_ultimate_range(&range, a, b);
	j = 0;
	while (j < size)
	{
		printf("%d", range[j]);
		j++;
	}
	return (0);
}*/
