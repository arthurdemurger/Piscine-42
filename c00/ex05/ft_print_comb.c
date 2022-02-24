/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:52:00 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/03 12:19:12 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(char a, char b, char c, char dernier)
{
	if (a != b && b != c && a != c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (dernier == 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	nb0;
	char	nb1;
	char	nb2;
	char	dernier;

	nb0 = '0';
	nb1 = '1';
	nb2 = '2';
	while (nb0 <= '7')
	{
		while (nb1 <= '8')
		{
			while (nb2 <= '9')
			{
				dernier = (nb0 == '7' && nb1 == '8' && nb2 == '9');
				ft_print(nb0, nb1, nb2, dernier);
				nb2++;
			}
			nb2 = ++nb1 + 1;
		}
		nb1 = nb0++;
	}
}
