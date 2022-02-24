/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:04:49 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 17:15:14 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] == s2[i] && s2[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*x;
	int		j;

	i = -1;
	while (!cmp || !tab || !tab[++i])
		return ;
	i = 1;
	while (i < ft_strlen(tab))
	{
		x = tab[i];
		j = i;
		while (j > 0 && cmp(tab[j - 1], x) > 0)
		{
			tab[j] = tab[j - 1];
			j -= 1;
		}
		tab[j] = x;
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int		main(void)
{
	int		index;
	char	**tab;

	tab = malloc(8 * sizeof(char *));
	tab[0] = strdup("hello");
	tab[1] = strdup("world");
	tab[2] = strdup("a");
	tab[3] = strdup("aa");
	tab[4] = strdup("ba");
	tab[5] = strdup("ab");
	tab[6] = strdup("z");
	tab[7] = 0;
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
}*/
