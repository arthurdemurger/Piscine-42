/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:39:29 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 16:57:23 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*x;
	int		j;

	i = -1;
	while (!tab || !tab[++i])
		return ;
	i = 1;
	while (i < ft_strlen(tab))
	{
		x = tab[i];
		j = i;
		while (j > 0 && ft_strcmp(tab[j - 1], x) > 0)
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
int main(int argc, char **argv)
{
	(void) argc;
	char *tab[5];
	
	tab[0] = argv[1];
	tab[1] = argv[2];
	tab[2] = argv[3];
	tab[3] = argv[4];
	tab[4] = NULL;
	ft_sort_string_tab(tab);
	for (int i = 0; i < 4; i++)
	    printf(" %s |", tab[i]);
}*/
