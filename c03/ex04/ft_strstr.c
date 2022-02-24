/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:13:03 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 20:59:01 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_equal(char *str, char *to_find)
{
	int		i;

	i = -1;
	while (to_find[++i])
		if (str[i] != to_find[i])
			return (0);
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = -1;
	if (!*to_find)
		return (str);
	while (str[++i])
		if (str[i] == *to_find)
			if (ft_is_equal(&str[i], to_find))
				return (&str[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int		main(void)
{
	char str[] = "few";
	char *to_find = "fewx";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}*/
