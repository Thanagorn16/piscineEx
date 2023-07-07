/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:41:01 by truangsi          #+#    #+#             */
/*   Updated: 2022/07/28 12:05:45 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
/*#include <string.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	src_length;

	index = 0;
	src_length = 0;
	while (index != size)
	{
		dest[index] = src[index];
		index++;
		if (index == size)
		{
			index--;
			dest[index] = '\0';
			index++;
		}
	}
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return (src_length);
}

/*int	main(void)
{
	int	r;
	int	c;
	char 	a[] = "hallo";
	char 	b[] = "aaaaa";

	r = strlcpy(b, "bbbbb", 5);
	printf("%d\n", r);
	printf("%s\n", b); 

	c = ft_strlcpy(a, "hello", 5);
	printf("%d\n", c);
	printf("%s\n", a); 
	return (0);
}*/
