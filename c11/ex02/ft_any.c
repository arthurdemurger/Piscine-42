/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:12:44 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 16:52:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = -1;
	if (!f || !tab)
		return (0);
	while (tab[++i])
		if ((f)(tab[i]))
			return (1);
	return (0);
}
//#include <stdio.h>
//#include <stdlib.h>
//int ft(char *str)
//{
//	if (*str == '1')
//		return (1);
//	return (0);
//}
//int main (void)
//{
//	char **array;
//	int	i;
//
//	i = 0;
//	array = malloc(8 * sizeof(char *));
//	array[0] = "0";
//	array[1] = "4";
//	array[2] = "2";
//	array[3] = "2";
//	array[4] = "1";
//	array[5] = "7";
//	array[6] = "2";
//	array[7] = NULL;
//	printf("%d\n", ft_any(array, ft));
//
//}
//