/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:54:32 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 16:52:18 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*ret;

	if (!f || !tab)
		return (0);
	ret = (int *)malloc(sizeof(int) * length);
	if (!ret)
		return (0);
	i = -1;
	while (++i < length)
		ret[i] = (f)(tab[i]);
	return (ret);
}
//
//#include <stdio.h>
//int ft_mul(int a)
//{
//	return (a * 2);
//}
//
//int main (void)
//{
//	int	i;
//	int *tab;
//	int length;
//	int *res;
//
//	length = 10;
//	tab = malloc(length * sizeof(int));
//	i = 0;
//	while (i < length)
//	{
//		tab[i] = i;
//		i++;
//	}
//	res = ft_map(tab, length, &ft_mul);
//	i = 0;
//	while ( i < length)
//	{
//		printf( "%i\n", res[i]);
//		i++;
//	}
//}