/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:45:34 by narhbal           #+#    #+#             */
/*   Updated: 2022/02/20 22:57:12 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	ft_is_digit(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_space(char n)
{
	if (n == '\t' || n == '\n' || n == '\v' || n == '\f'
		|| n == '\r' || n == ' ')
		return (1);
	else
		return (0);
}

int	ft_is_print(char n)
{
	if (n >= ' ' && n <= '~')
		return (1);
	else
		return (0);
}

//int	dict_error(char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i])
//	{
//		while (ft_is_digit(str[i]))
//			i++;
//		while (ft_is_space(str[i]))
//			i++;
//		if (str[i] == ':')
//			i++;
//		else
//		{
//			write(1, "Dict Error\n", 11);
//			return (0);
//		}
//		while (ft_is_space(str[i]))
//			i++;
//		while (ft_is_print(str[i]))
//			i++;
//		if ((str[i] != '\n'))
//		{
//			write(1, "Dict Error\n", 11);
//			return (0);
//		}
//	}
//	return (1);
//}
