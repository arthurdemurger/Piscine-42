/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:47:25 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/03 12:23:15 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int a, int b, int dernier)
{
	if (a < b)
	{
		ft_putchar((a / 10) + 48);
		ft_putchar(a % 10 + 48);
		ft_putchar(' ');
		ft_putchar((b / 10) + 48);
		ft_putchar(b % 10 + 48);
		if (!dernier)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;
	int		dernier;

	nb1 = 0;
	nb2 = 1;
	while (nb1 <= 98)
	{
		while (nb2 <= 99)
		{
			dernier = (nb1 == 98 && nb2 == 99);
			ft_print(nb1, nb2, dernier);
			nb2++;
		}
		nb2 = 0;
		nb1++;
	}
}
