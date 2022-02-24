/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:06:39 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/20 21:15:08 by swijnber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

// Check of the number in the input
long	check_un_int(char *str)
{
	long	nb;

	nb = ft_ln_atoi(str);
	if (nb >= 0 && nb <= 4294967295)
		return (1);
	else
		return (0);
}

// Check of the inputs
int	check_arg(int argc, char **argv)
{
	if (argc > 3 || argc == 1)
		return (0);
	else if (argc == 2)
	{
		if (!check_un_int(argv[1]))
			return (0);
	}
	else if (argc == 3)
	{
		if (!check_un_int(argv[2]))
			return (0);
	}
	return (1);
}

// Numbers of characters in the dict
int	ft_nb_char(char *name_file)
{
	int		a;
	char	c;
	int		i;

	a = open(name_file, O_RDONLY);
	if (a < 0)
		return (-1);
	i = 0;
	while (read(a, &c, 1))
	{
		if (c != '\0')
			i++;
	}
	close(a);
	return (i);
}

// Dict information collection
char	*numbers_recup(char *name_file)
{
	int		a;
	int		n;
	int		i;
	char	*buf;
	char	*name;

	name = name_file;
	buf = malloc(sizeof(char) * ft_nb_char(name));
	i = 0;
	a = open(name, O_RDONLY);
	n = read(a, buf, ft_nb_char(name));
	close(a);
	return (buf);
}
