/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:05:10 by dsoroko           #+#    #+#             */
/*   Updated: 2022/02/06 11:25:52 by ademurge         ###   ########.fr       */
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
			if ((h == 1 && w == 1) || (w == x && h == y && h != 1 && w != 1))
				ft_putchar('/');
			else if ((h == y && w == 1) || (h == 1 && w == x))
				ft_putchar('\\');
			else if ((h > 1 && h < y) && (w > 1 && w < x))
				ft_putchar (' ');
			else
				ft_putchar('*');
		}
		ft_putchar('\n');
	}
}
