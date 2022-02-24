/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:19:44 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/21 22:08:37 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	c;
	int	i;

	i = -1;
	c = 0;
	if (!f)
		return (0);
	while (++i < length)
		if ((f)(tab[i]))
			c++;
	return (c);
}
//#include <stdio.h>
//#include <stdlib.h>
//int ft(char *str)
//{
//	if (*str == 'A')
//		return (1);
//	return (0);
//}
//int main (void)
//{
//	char **array;
//
//	array = malloc(10 * sizeof(char *));
//	array[0] = "Z";
//	array[1] = "Z";
//	array[2] = "Z";
//	array[3] = "A";
//	array[4] = "A";
//	array[5] = "A";
//	array[6] = "Z";
//	array[7] = "Z";
//	array[8] = "Z";
//	array[9] = "NULL";
//	printf("%d\n", ft_count_if(array, 10, ft));
//}