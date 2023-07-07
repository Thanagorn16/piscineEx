/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:11:48 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/31 12:24:56 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((src[index] != '\0') && (index < n))
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*int	main(void)
{
	char	str1[] = "aaai";
	char	str2[] = "bbbqaa";

	printf("%s\n", str2);
	printf("%s\n", strncpy(str2, str1, 3));

	printf("%s\n", ft_strncpy(str2, str1, 3));
	
	return (0);
}*/
