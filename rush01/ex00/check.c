/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:52:04 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 20:35:02 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	line(int **tab, int y, int n)
{
	int	i;

	i = 0;
	while (++i < 5)
	{
		if (tab[y][i] == n)
			return (0);
	}
	return (1);
}

int	col(int **tab, int x, int n)
{
	int	i;

	i = 0;
	while (++i < 5)
	{
		if (tab[i][x] == n)
			return (0);
	}
	return (1);
}

int	check(int **tab, int x, int y, int n)
{
	if (line(tab, y, n) && col(tab, x, n))
		return (1);
	else
		return (0);
}
