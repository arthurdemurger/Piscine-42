/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:13:44 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 21:06:53 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	collect_rows(int **tab, char *str)
{
	int	i;
	int	c;

	i = 16;
	c = 1;
	while (i < 31)
	{
		if (c < 5)
			tab[c][0] = str[i] - 48;
		else if (c >= 5)
			tab[c - 4][5] = str[i] - 48;
		c++;
		i += 2;
	}
}

void	collect_col(int **tab, char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (i < 15)
	{
		if (c < 5)
			tab[0][c] = str[i] - 48;
		else if (c >= 5)
			tab[5][c - 4] = str[i] - 48;
		c++;
		i += 2;
	}
}

void	ft_tab_init(int **tab, char *str)
{
	int	i;
	int	c;

	i = 0;
	while (i < 6)
		tab[i++] = malloc(sizeof(int) * 6);
	i = 0;
	while (i < 6)
	{
		c = -1;
		while (++c < 6)
			tab[i][c] = 0;
		i++;
	}
	collect_col(tab, str);
	collect_rows(tab, str);
}
