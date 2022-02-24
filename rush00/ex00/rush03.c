/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:25:39 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/06 11:32:08 by ademurge         ###   ########.fr       */
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
			if ((h == y && w == 1) || (h == 1 && w == 1))
				ft_putchar('A');
			else if ((h == 1 && w == x)
				|| (w == x && h == y && h != 1 && w != 1))
				ft_putchar('C');
			else if ((h > 1 && h < y) && (w > 1 && w < x))
				ft_putchar (' ');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
