/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:07:52 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/30 12:23:17 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev_num;
	int	index;
	int	i;

	index = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		rev_num = tab[i];
		tab[i] = tab[index];
		tab[index] = rev_num;
		i++;
		index--;
	}
}

/*int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	size = 5;
	ft_rev_int_tab(tab, size);
	i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
	return(0);
}*/
