/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:09:27 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/04 18:19:05 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (nb > i * nb)
		return (0);
	else if (power > 1)
		return (i * ft_recursive_power(i, power - 1));
	else if (power == 0)
		return (1);
	else if (power <= 0)
		return (0);
	else
		return (i);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(10, 2));
	return (0);
}*/
