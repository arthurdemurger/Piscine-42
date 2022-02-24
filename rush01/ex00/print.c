/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:18:50 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 11:57:39 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_print_tab(int **tab)
{
	int	i;
	int	c;

	i = 1;
	while (i < 5)
	{
		c = 1;
		while (c < 5)
		{
			ft_putchar(tab[i][c] + 48);
			if (c == 4)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			c++;
		}
		i++;
	}
}