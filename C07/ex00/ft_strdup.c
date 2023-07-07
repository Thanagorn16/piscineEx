/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:50:52 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/04 13:17:45 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strdup(char *src)
{
	char	*a;
	long	i;

	a = (char *)malloc(sizeof(a));
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

/*int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", strdup(str));
	printf("%s\n", "-------");
	printf("%s", ft_strdup(str));
}*/
