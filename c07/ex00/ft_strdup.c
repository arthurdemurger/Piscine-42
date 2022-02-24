/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:43:35 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 21:08:23 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		c;

	i = -1;
	c = 0;
	while (src[c])
		c++;
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (NULL);
	while (src[++i])
		str[i] = src[i];
	str[i] = 0;
	return (str);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *test;
	char *dup1;
	char *dup2;

	test = NULL;
	printf("\ntest = %s | ", test);
	dup2 = ft_strdup(test);
	dup1 = strdup(test);
	printf("ft_strdup  = %s | strdup = %s\n", dup1, dup2);
	free(dup1);
	free(dup2);
}*/
