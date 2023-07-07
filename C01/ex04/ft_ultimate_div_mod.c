/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:57:09 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/30 15:22:50 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	int	aa;

	aa = *a;
	div = *a / *b;
	*a = div;
	mod = aa % *b;
	*b = mod;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 3;
	b = 4;
	div = &a;
	mod = &b;
	ft_ultimate_div_mod(div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	return (0);
}*/
