/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:41:58 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 11:17:52 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (!nb)
		return (size_src);
	while (size_dest + i < nb - 1 && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	if (i < nb)
		dest[size_dest + i] = '\0';
	if (size_dest > nb)
		return (size_src + nb);
	return (size_src + size_dest);
}
/*
#include <stdio.h>
#include <string.h>

int				main()
{
	unsigned int	nb;
	nb = 10;

	char			str0[10] = "blbla";
	char			str1[50] = ", ca va ?";
	printf("%u | %s\n", ft_strlcat(str0, str1, nb), str0);

	char			str2[10] = "blbla";
	char			str3[50] = ", ca va ?";
	printf("%lu | %s\n", strlcat(str2, str3, nb), str2);
}*/
