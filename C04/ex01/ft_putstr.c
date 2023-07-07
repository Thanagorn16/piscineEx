/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:54:08 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/30 10:55:03 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;
	long	i;

	ptr = str;
	i = 0;
	while (ptr[i] != '\0')
	{
		write(1, &ptr[i], 1);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr("hey");
	return (0);
}*/
