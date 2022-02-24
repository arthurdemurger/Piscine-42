/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:07:56 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 22:10:42 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush01.h"

int	max_plus_line(int *tab)
{
	int	max;
	int	i;
	int	n;

	i = 0;
	max = 0;
	n = 0;
	while (++i < 5)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			n++;
		}
	}
	return (n);
}

int	max_minus_line(int *tab)
{
	int	max;
	int	i;
	int	n;

	i = 5;
	max = 0;
	n = 0;
	while (--i > 0)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			n++;
		}
	}
	return (n);
}

int	max_plus_col(int **tab, int x)
{
	int	max;
	int	i;
	int	n;

	i = 0;
	max = 0;
	n = 0;
	while (++i < 5)
	{
		if (tab[i][x] > max)
		{
			max = tab[i][x];
			n++;
		}
	}
	return (n);
}

int	max_minus_col(int **tab, int x)
{
	int	max;
	int	i;
	int	n;

	i = 5;
	max = 0;
	n = 0;
	while (--i > 0)
	{
		if (tab[i][x] > max)
		{
			max = tab[i][x];
			n++;
		}
	}
	return (n);
}

void	print_possible(int **tab, int *c)
{
	ft_print_tab(tab);
	*c += 1;
}
