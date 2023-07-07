/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:03:05 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/04 17:41:29 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_last_range(char **strs, int size, char *sep)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size)
	{
		temp += ft_strlen(strs[i]);
		if (i != size - 1)
			temp += ft_strlen(sep);
		i++;
	}
	return (temp);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		last_range;
	char	*arr;

	if (size == 0)
	{
		arr = (char *)malloc(sizeof(arr));
		return (arr);
	}
	last_range = ft_last_range(strs, size, sep);
	arr = (char *)malloc(sizeof(arr) * last_range);
	i = 0;
	while (i < size)
	{
		arr = ft_strcpy(arr, strs[i]);
		if (i != size - 1)
			arr = ft_strcpy(arr, sep);
		i++;
	}
	return (arr - last_range);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, "||"));
	return (0);
}*/
