/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:09:21 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 14:41:35 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_reverse(char *str, int size);
char	*ft_itoa(int nb, char *str, char *base);
int		ft_size_base(int nb, char *base);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*itoa;
	int		i;

	nb = is_base_valide(base_from);
	i = is_base_valide(base_to);
	if (!nb || !i || !nbr || !base_from || !base_to)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	i = ft_size_base(nb, base_to);
	if (nb < 0)
		i++;
	itoa = (char *)malloc(sizeof(char) * i + 1);
	if (!itoa)
		return (0);
	ft_itoa(nb, itoa, base_to);
	ft_reverse(itoa, ft_strlen(itoa));
	return (itoa);
}
/*
#include <stdio.h>
int		main(void)
{
	printf("result : '%s'\n", ft_convert_base("-7FFFFFFF", "0123456789abcdef",
	"0123456789"));
}*/
