/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:03:22 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/16 17:36:25 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		c;

	i = -1;
	c = 0;
	while (src[c] != '\0')
		c++;
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (0);
	while (src[++i])
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest)++ = *(src)++;
	*dest = '\0';
	return (dest);
}

struct s_stock_str	ft_stock(char *str)
{
	t_stock_str	stock;

	stock.size = ft_strlen(str);
	stock.str = str;
	stock.copy = ft_strdup(str);
	return (stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab_stock;
	int			i;

	i = -1;
	tab_stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab_stock)
		return (NULL);
	while (++i < ac)
		tab_stock[i] = ft_stock(av[i]);
	tab_stock[i].size = 0;
	tab_stock[i].str = 0;
	tab_stock[i].copy = 0;
	return (tab_stock);
}
