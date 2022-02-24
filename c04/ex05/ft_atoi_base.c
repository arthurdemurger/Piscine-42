/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:59:40 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/22 22:37:46 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_base_valide(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base && base[++i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\r'
			|| base[i] == '\v' || base[i] == '\f')
			return (0);
		j = i ;
		while (base[++j])
			if (base[i] == base [j])
				return (0);
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	is_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base && base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	i = 0;
	if (!str || !base || !is_base_valide(base))
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_base(str[i], base) != -1)
		nb = nb * (ft_strlen(base)) + is_base(str[i++], base);
	return (nb * sign);
}
/*
#include <stdio.h>
int main (void)
{
	char base [] = "01";
	printf("%d", ft_atoi_base("-10000000000000000000000000000000", base));	
}*/
