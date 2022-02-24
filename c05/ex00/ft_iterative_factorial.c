/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:29:55 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/08 18:19:26 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	res = nb;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		res *= nb - i;
		i++;
	}
	return (res);
}
