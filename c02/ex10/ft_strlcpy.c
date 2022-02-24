/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:46:18 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 16:09:46 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = -1;
	c = 0;
	while (src[c])
		c++;
	if (size)
	{
		while (src[++i] && i < (size - 1))
			dest[i] = src[i];
		dest[i] = 0;
	}
	return (c);
}
/*
#include <stdio.h>
#include <string.h>
int				main(void)
{
	char	*string1;
	char	string2[10];

	string1 = "hahahahahjjjjj";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, 10);
	printf("strlcpy  : %s\n", string2);
	ft_strlcpy(string2, string1, 10);
	printf("ft_strlcpy : %s\n", string2);
}*/
