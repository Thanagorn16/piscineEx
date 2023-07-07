/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:19:20 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/30 15:07:22 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	f_num;
	int	s_num;
	int	*a;
	int	*b;

	f_num = 1;
	s_num = 2;
	a = &f_num;
	b = &s_num;
	
	ft_swap(a, b);
	printf("%d ", *a);
	printf("%d", *b);
	return (0);
}*/
