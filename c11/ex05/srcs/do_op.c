/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:19:00 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/24 00:17:56 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_calcul(int nb1, char *oper, int nb2)
{
	int		res;
	int		i;
	int		(*fct[5])(int nb1, int nb2);
	char	str[5];

	fct[0] = ft_modulo;
	fct[1] = ft_division;
	fct[2] = ft_addition;
	fct[3] = ft_soustraction;
	fct[4] = ft_multi;
	str[0] = '%';
	str[1] = '/';
	str[2] = '+';
	str[3] = '-';
	str[4] = '*';
	i = 0;
	while (str[i] != oper[0])
		i++;
	res = (*fct[i])(nb1, nb2);
	return (res);
}

int	check_op(char *oper)
{
	int	i;

	i = 0;
	while (oper[i])
		i++;
	if (i > 1 || !i)
		return (0);
	else if (oper[0] == '+' || oper[0] == '-'
		|| oper[0] == '/' || oper[0] == '%'
		|| oper[0] == '*')
		return (1);
	return (0);
}

void	ft_operation(char *arg1, char *oper, char *arg2)
{
	int	nb1;
	int	nb2;
	int	res;

	if (!check_op(oper))
	{
		write(1, "0\n", 2);
		return ;
	}
	nb1 = ft_atoi(arg1);
	nb2 = ft_atoi(arg2);
	if (oper[0] == '%' && !nb2)
	{
		write (1, "Stop : modulo by zero\n", 22);
		return ;
	}
	else if (oper[0] == '/' && !nb2)
	{
		write (1, "Stop : division by zero\n", 24);
		return ;
	}
	res = ft_calcul(nb1, oper, nb2);
	print_calcul(res);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_operation(argv[1], argv[2], argv[3]);
	}
	return (0);
}
