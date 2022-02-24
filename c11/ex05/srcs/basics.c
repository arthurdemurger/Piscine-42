/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:42:17 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/21 16:19:34 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, str++, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar((nb % 10) + 48);
	}
}

void	print_calcul(int res)
{
	ft_putnbr(res);
	write (1, "\n", 1);
}

int	ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		moins;

	i = 0;
	moins = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			moins *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			nb = nb * 10 + str[i] - 48;
			i++;
	}
	return (nb * moins);
}
