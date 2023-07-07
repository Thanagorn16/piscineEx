/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:36:06 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/04 19:06:37 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (i);
	}
	else
		return (-1);
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(1));
	return (0);
}*/
