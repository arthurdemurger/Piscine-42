/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swijnber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:48:20 by swijnber          #+#    #+#             */
/*   Updated: 2022/02/20 21:34:50 by swijnber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	unit(unsigned int nb, char ***tab)
{
	if (nb == 0)
		return ;
	put_str(tab[0][nb]);
}

void	ten(unsigned int nb, char ***tab)
{
	if (nb < 20)
	{
		unit (nb, tab);
		return ;
	}
	put_str(tab[1][((nb - 20) / 10) * 10]);
	if (nb % 10 != 0)
		write (1, "-", 1);
	unit(nb % 10, tab);
}

void	hundred(unsigned int nb, char ***tab)
{
	if (nb > 99)
	{
		unit(nb / 100, tab);
		write (1, " ", 1);
		put_str(tab[2][0]);
	}
	if (nb % 100 != 0)
	{
		if (nb > 99)
			write (1, " ", 1);
		ten(nb % 100, tab);
	}
}

void	thousand(unsigned int nb, char ***tab)
{
	if ((nb / 1000) % 1000 > 0)
	{
		hundred((nb / 1000) % 1000, tab);
		write (1, " ", 1);
		put_str(tab[3][0]);
		if (nb % 1000)
			write (1, ", ", 2);
	}
	hundred(nb % 1000, tab);
	write (1, "\n", 1);
}

void	writing(unsigned int nb, char ***tab)
{
	if (nb == 0)
		put_str(tab[0][0]);
	if ((nb / 1000000000) % 1000 > 0)
	{
		hundred(nb / 1000000000, tab);
		write (1, " ", 1);
		put_str(tab[3][2]);
		if (nb % 1000000000)
			write (1, ", ", 2);
	}
	if ((nb / 1000000) % 1000 > 0)
	{
		hundred((nb / 1000000) % 1000, tab);
		write (1, " ", 1);
		put_str(tab[3][1]);
		if (nb % 1000000)
			write (1, ", ", 2);
	}
	thousand(nb, tab);
}
