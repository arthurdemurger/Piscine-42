/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:57:10 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/07 18:08:49 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			res *= nb;
			i++;
		}
	}
	return (res);
}
