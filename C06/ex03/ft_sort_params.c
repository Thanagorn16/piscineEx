/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:07:26 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/02 21:58:04 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_sort_params(int index, char **str)
{
	char	*temp;
	long	i;
	long	j;

	i = 1;
	j = 1;
	while (j < index - 1)
	{
		i = 1;
		while (i < index - 1)
		{
			if (ft_strcmp(str[i], str[i + 1]) == 1)
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_params(argc, argv);
	i = 1;
	j = 0;
	while (i <= argc - 1)
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
