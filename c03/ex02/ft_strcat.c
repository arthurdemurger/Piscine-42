/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:45:03 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 10:20:54 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		size;
	int		c;

	size = ft_strlen(dest);
	c = -1;
	while (src[++c])
		dest[size + c] = src[c];
	dest[size + c] = 0;
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[5] = "Hello";
	char *src = "world";
	char dest1[5] = "Hello";
	char *src1 = "world";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);
	printf("-----\ndest = %s\nsrc = %s\n", dest1, src1);
	strcat(dest1, src1);
	printf("result = %s\n-----\n", dest1);
	return (0);
}*/