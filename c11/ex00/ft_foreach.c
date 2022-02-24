/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:58:58 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 16:51:18 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	if (!f || !tab)
		return ;
	while (++i < length)
		(*f)(tab[i]);
}
//
//#include <stdlib.h>
//#include <unistd.h>
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
//
//void	ft_putnbr(int nb)
//{
//	if (nb == -2147483648)
//	{
//		ft_putchar('-');
//		ft_putchar('2');
//		ft_putnbr(147483648);
//	}
//	else if (nb < 0)
//	{
//		ft_putchar('-');
//		nb = -nb;
//		ft_putnbr(nb);
//	}
//	else if (nb > 9)
//	{
//		ft_putnbr(nb / 10);
//		ft_putnbr(nb % 10);
//	}
//	else
//		 ft_putchar(nb + 48);
//}
//
//int main (void)
//{
//	int	i;
//	int *tab;
//	int length;
//
//	length = 10;
//	tab = malloc(length * sizeof(int));
//	i = 0;
//	while (i < length)
//	{
//		tab[i] = i;
//		i++;
//	}
//	ft_foreach(tab, length, &ft_putnbr);
//}