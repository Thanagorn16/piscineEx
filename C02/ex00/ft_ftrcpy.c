/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftrcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:59:31 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/26 16:13:51 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[] = "iiii";
	char	str2[] = "sdfsdfdf";
	int	index;

	index = 0;
	while (str2[index] != '\0')
	{
		write(1, &str2[index], 1);
		index++;
	}

	write(1, "\n", 1);
	ft_strcpy(str2, str1);

	index = 0;
	while (str2[index] != '\0')
	{
		write(1, &str2[index], 1);
		index++;
	}

	return(0);
}*/
