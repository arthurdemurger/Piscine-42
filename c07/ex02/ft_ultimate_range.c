/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:02:17 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 21:06:19 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	taille;
	int	i;

	if (!range)
		return (0);
	if (min >= max)
	{
		*(range) = NULL;
		return (0);
	}
	taille = max - min;
	*range = (int *)malloc(sizeof(int) * (taille));
	if (!*range)
		return (-1);
	i = 0;
	while (i < taille)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (taille);
}
/*
#include <stdio.h>
int main(void)
{
	int **tab;
	
	tab = NULL;
	printf("%d\n", ft_ultimate_range(tab, 10, 20));
	//for (int i = 0; i < 10; i++)
	//	printf("%d\n", *tab[i]);
}*/
