/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:58:57 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/05 13:05:24 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		x;
	int		j;

	i = 1;
	while (i < size)
	{
		x = *(tab + i);
		j = i;
		while (j > 0 && *(tab + j - 1) > x)
		{
			*(tab + j) = *(tab + j - 1);
			j -= 1;
		}
		*(tab + j) = x;
		i++;
	}
}
