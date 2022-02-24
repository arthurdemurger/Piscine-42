/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:38:13 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 23:25:05 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (!f)
		return (0);
	while (i < length - 1 && !(f)(tab[i], tab[i + 1]))
			i++;
	if (i < length - 1 && (f)(tab[i], tab[i + 1]) < 0)
	{
		while (i++ < length - 1)
			if ((f)(tab[i - 1], tab[i]) > 0)
				return (0);
	}
	else if (i < length - 1 && (f)(tab[i], tab[i + 1]) > 0)
	{
		while (i++ < (length - 1))
			if ((f)(tab[i - 1], tab[i]) < 0)
				return (0);
	}
	return (1);
}
//
//#include <stdio.h>
//#include <stdlib.h>
//int	ft_tri(int a, int b)
//{
//	return (a - b);
//}
//
//int	main(void)
//{						// 0  1  2  3  4  5  6  7  8  9  10
//	static int	tabx[] = { 8, 7, 5, 5, 4, 4, 3, 3, 3, 2, 0};
//	int			length;
//	
//	length = 10;
//	printf("%d\n", ft_is_sort(tabx, length, &ft_tri));
//}