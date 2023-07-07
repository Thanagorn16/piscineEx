/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:50:37 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/20 10:40:02 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
	write(1, "\n", 1);
}

/*int	main(void)
{
	ft_print_number();
	return (0);
}*/
