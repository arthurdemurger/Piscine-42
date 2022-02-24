/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:02:14 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/20 22:59:04 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	main(int argc, char **argv)
{
	char	*str;
	char	*name_file;
	char	***tab;
	long	nb;

	nb = -1;
	str = "numbers.dict";
	if (!check_arg(argc, argv))
		write(1, ERROR, 6);
	else
	{
		if (argc == 3)
		{
			name_file = argv[1];
			nb = ft_ln_atoi(argv[2]);
		}
		else
		{
			name_file = str;
			nb = ft_ln_atoi(argv[1]);
		}
		tab = fill(name_file);
		if (tab)
			writing(nb, tab);
	}
}
