/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:05:18 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/24 00:20:41 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_modulo(int nb1, int nb2)
{
	return (nb1 % nb2);
}

int	ft_division(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int	ft_addition(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int	ft_soustraction(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int	ft_multi(int nb1, int nb2)
{
	return (nb1 * nb2);
}
