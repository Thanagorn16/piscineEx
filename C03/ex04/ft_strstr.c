/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:59:56 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/02 15:40:53 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	long	i;
	long	j;
	char	*ret;

	i = 0;
	j = 0;
	ret = to_find;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "TutorialPoint";
	char	str2[] = "tori";

	printf("%s\n", strstr(str1, str2));
	printf("%s\n", ft_strstr(str1, str2));
	return (0);
}*/
