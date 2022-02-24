/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:42:05 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 23:25:32 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H

# define DO_OP_H

// Libraries
# include <unistd.h>

// Basics
int		ft_atoi(char *str);
void	print_calcul(int res);

//Calcul
int		ft_calcul(int nb1, char *oper, int nb2);
int		ft_modulo(int nb1, int nb2);
int		ft_division(int nb1, int nb2);
int		ft_addition(int nb1, int nb2);
int		ft_soustraction(int nb1, int nb2);
int		ft_multi(int nb1, int nb2);

#endif
