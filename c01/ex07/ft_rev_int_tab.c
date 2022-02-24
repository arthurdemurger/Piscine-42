/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:59:58 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/05 13:05:13 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = *(tab + i);
		*(tab + i) = *(tab + (size - 1) - i);
		*(tab + (size - 1) - i) = swap;
		i++;
	}
}
