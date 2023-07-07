/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:12:45 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/01 15:06:08 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		write(1, &argv[i][j], 1);
		j++;
		if (argv[i][j] == '\0')
		{
			i++;
			j = 0;
			write(1, "\n", 1);
		}
	}
	return (0);
}
