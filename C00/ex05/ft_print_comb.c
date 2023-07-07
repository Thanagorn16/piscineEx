/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:44:35 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/20 10:40:58 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	f_num;
	char	s_num;
	char	t_num;

	f_num = '0';
	while (f_num <= '9')
	{
		s_num = f_num + 1;
		while (s_num <= '9')
		{
			t_num = s_num + 1;
			if (s_num != t_num)
			{
				while (t_num <= '9')
				{
					if (s_num != t_num && f_num != t_num)
						write_num(f_num, s_num, t_num);
					t_num++;
				}
			}
			s_num++;
		}
		f_num++;
	}
	write(1, "\n", 1);
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
