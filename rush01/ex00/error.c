/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:38:45 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 20:34:37 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	error(void)
{
	char	*str;
	int		i;

	str = "Error";
	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int	check_arg(char *str)
{
	int	i;
	int	c;
	int	s;

	i = 0;
	c = 0;
	s = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			c++;
		else if (str[i] == ' ')
			s++;
		i++;
	}
	if (c != 16 || s != 15 || i != 31)
		return (0);
	else
		return (1);
}
