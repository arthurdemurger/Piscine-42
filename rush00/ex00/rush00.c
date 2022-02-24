/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:24:27 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/06 11:37:31 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h++ < y && x > 0 && y > 0)
	{
		w = 0;
		while (w++ < x)
		{
			if ((h == 1 && (w == 1 || w == x))
				|| (h == y && (w == 1 || w == x)))
				ft_putchar('o');
			else if ((h > 1 && h < y && w == 1) || (w == x && (h > 1 || h < y)))
				ft_putchar('|');
			else if ((h > 1 && h < y) && (w > 1 && w < x))
				ft_putchar (' ');
			else
				ft_putchar('-');
		}
		ft_putchar ('\n');
	}
}
