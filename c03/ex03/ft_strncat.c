/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:49:01 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 10:22:34 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;	
	unsigned int		c;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (c < nb && src[c])
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int		main(void)
{
	char dest[20] = "hello";
	char src[] = "hey";
	char dest1[20] = "hello";
	char src1[] = "hey";
	unsigned int nb = 10;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);
	
	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest1, src1, nb);
	strncat(dest1, src1, nb);
	printf("result = %s\n-----\n", dest1);

	return (0);
}*/
