/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:44:01 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/22 22:29:14 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_base_valide(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = i;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putchar_base(int nbr, char *base)
{
	write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	taille;
	unsigned int	un;

	if (!base)
		return ;
	un = nbr;
	taille = ft_strlen(base);
	if (is_base_valide(base))
	{
		if (nbr < 0)
		{
			un = -nbr;
			write(1, "-", 1);
		}
		if (un > taille - 1)
			ft_putnbr_base(un / taille, base);
		ft_putchar_base((un % taille), base);
	}	
}
/*#include <stdio.h>
int main (void)
{
	char *str = "0123456789";
	ft_putnbr_base(-2147483648, str);	
}*/