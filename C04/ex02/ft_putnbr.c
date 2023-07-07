/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:58:42 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/30 11:00:17 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	pos(int pnb)
{
	if (pnb >= 10)
	{
		pos(pnb / 10);
		pos(pnb % 10);
	}
	else
	{
		print(pnb + '0');
	}
}

void	nev(int nnb)
{
	print('-');
	nnb *= -1;
	pos(nnb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		pos(147483648);
	}
	else if (nb < 0)
	{
		nev(nb);
	}
	else if (nb >= 0)
	{
		pos(nb);
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
