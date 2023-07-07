/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:47:14 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/20 10:41:27 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	var[4];

	var[0] = '0';
	while (var[0] <= '9')
	{
		var[1] = '0';
		while (var[1] <= '9')
		{
			var[2] = var[0];
			var[3] = var[1] + 1;
			while (var[2] <= '9')
			{
				while (var[3] <= '9')
				{
					write_num(var[0], var[1], var[2], var[3]);
					var[3]++;
				}
				var[2]++;
				var[3] = '0';
			}
			var[1]++;
		}
		var[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
