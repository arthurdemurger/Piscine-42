/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:59:34 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 22:10:33 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	sky_line(int **tab, int y)
{
	if (max_plus_line(tab[y]) != tab[y][0])
		return (0);
	if (max_minus_line(tab[y]) != tab[y][5])
		return (0);
	return (1);
}

int	sky_col(int **tab, int x)
{
	if (max_plus_col(tab, x) != tab[0][x])
		return (0);
	if (max_minus_col(tab, x) != tab[5][x])
		return (0);
	return (1);
}

int	possible(int **tab)
{
	int	y;

	y = 0;
	while (++y < 5)
	{
		if (!sky_line(tab, y) || !sky_col(tab, y))
			return (0);
	}
	return (1);
}

void	fill2(int **tab, int x, int y, int *c)
{
	fill(tab, 0, 0, c);
	tab[y][x] = 0;
}

void	fill(int **tab, int x, int y, int *c)
{
	int	n;

	while (++y < 5)
	{
		x = 0;
		while (++x < 5)
		{
			if (tab[y][x] == 0)
			{
				n = 0;
				while (++n < 5)
				{
					if (check(tab, x, y, n))
					{
						tab[y][x] = n;
						fill2(tab, x, y, c);
					}
				}
				return ;
			}
		}
	}
	if (possible(tab))
		print_possible(tab, c);
}
