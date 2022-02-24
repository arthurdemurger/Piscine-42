/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:54:09 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/20 20:54:17 by swijnber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
// ***** atoi *****
long	ft_ln_atoi(char *str)
{
	long	nb;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * sign);
}

// ***** putstr *****
void	put_str(char *str)
{
	while (str && *str)
		write(1, str++, 1);
}

// ***** strstr *****
int	ft_is_equal(char *str, char *to_find)
{
	int		i;

	i = -1;
	while (to_find[++i])
		if (str[i] != to_find[i])
			return (0);
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		bool;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			bool = ft_is_equal(&str[i], to_find);
			if (bool)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

// ***** strlen ****
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}
