/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:29:28 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/30 11:42:23 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*ptr_div;
	int	*ptr_mod;

	a = 3;
	b = 4;
	ptr_div = &c;
	ptr_mod = &d;


	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("%d\n", c);
	printf("%d\n", d);
}*/
