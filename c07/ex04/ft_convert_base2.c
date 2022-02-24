/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:00:25 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 21:04:35 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_size_base(int nb, char *base)
{
	int				i;
	unsigned int	un;

	i = 0;
	un = nb;
	if (!nb)
		return (1);
	else if (nb < 0)
		un = -nb;
	while (un)
	{
		un = un / ft_strlen(base);
		i++;
	}
	return (i);
}

void	ft_reverse(char *str, int size)
{
	int		i;
	char	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = swap;
		i++;
	}
}

void	ft_itoa2(unsigned int *un, char *base, char *str, int *i)
{
	int	mod;

	mod = *un % ft_strlen(base);
	str[(*i)++] = base[mod];
	*un = *un / ft_strlen(base);
}

char	*ft_itoa(int nb, char *str, char *base)
{
	int				i;
	int				sign;
	unsigned int	un;

	i = 0;
	sign = 1;
	un = nb;
	if (nb == 0)
	{
		str[i++] = base[0];
		str[i] = '\0';
		return (str);
	}
	else if (nb < 0)
	{
		sign *= -1;
		un = -nb;
	}
	while (un)
		ft_itoa2(&un, base, str, &i);
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}
