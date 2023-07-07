/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:39:02 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/30 10:42:38 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*ptr;
	long	i;

	ptr = str;
	i = 0;
	while (ptr[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	printf("%d", ft_strlen("hello"));
	return (0);
}*/
