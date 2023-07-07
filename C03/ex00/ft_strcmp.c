/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:51:42 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/02 18:09:48 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue ;
		}
		else
		{
			result = s1[i] - s2[i];
			return (result);
		}
	}
	return (result);
}

/*int	main(void)
{
	char str1[] = "hello";
	char str2[] = "heLlo";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
	return (0);
}*/
