/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:09:33 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/01 15:45:10 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	while (i != 0)
	{
		write(1, &argv[i][j], 1);
		j++;
		if (argv[i][j] == '\0')
		{
			i--;
			j = 0;
			write(1, "\n", 1);
		}
	}
	return (0);
}
