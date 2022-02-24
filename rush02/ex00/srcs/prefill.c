/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:43:19 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/20 21:12:44 by swijnber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

// Memory allocation for the different tabs
char	***malloc_tab(char *dict)
{
	int		i;
	char	***tab;
	int		big;

	big = counter_big_nb(dict);
	i = 0;
	tab = (char ***)malloc(sizeof(char **) * 4);
	if (!tab)
		return (NULL);
	tab[0] = (char **)malloc(sizeof(char *) * 20);
	tab[1] = (char **)malloc(sizeof(char *) * 80);
	tab[2] = (char **)malloc(sizeof(char *) * 900);
	tab[3] = (char **)malloc(sizeof(char *) * big);
	while (i < 4)
		if (!tab[i++])
			return (NULL);
	return (tab);
}

void	trop_de_ligne(char ***tab, long nb, int size, char *ltr)
{
	int	i;

	i = -1;
	tab[2][nb - 100] = (char *)malloc(sizeof(char) * size + 1);
	while (++i < size)
			tab[2][nb - 100][i] = ltr[i];
	tab[2][nb - 100][i] = '\0';
}

// Counting numbers greater than or equal to 1000
int	counter_big_nb(char *dict)
{
	char	*tab;
	int		c;
	int		i;

	i = 0;
	c = 0;
	tab = ft_strstr(dict, "1000");
	while (tab[i])
	{
		while (tab[i] == ' ' || tab[i] == '\f' || tab[i] == '\n'
			|| tab[i] == '\r' || tab[i] == '\t' || tab[i] == '\v')
			i++;
		if (tab[i] >= '0' && tab[i] <= '9')
			if (check_un_int(&tab[i]))
				c++;
		while (tab[i] != '\n' && tab[i] != '\0')
			i++;
	}
	return (c);
}
