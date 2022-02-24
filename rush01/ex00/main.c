/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:55:26 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 22:37:57 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int		**tab;
	int		i;
	int		c;
	int		*ptr;

	ptr = &c;
	c = 0;
	i = -1;
	if (argc != 2 || !check_arg(argv[1]))
		error();
	else
	{
		tab = malloc (sizeof(int *) * 6);
		ft_tab_init (tab, argv[1]);
		fill(tab, 0, 0, ptr);
		if (c != 1)
			error();
		while (++i < 6)
			free(tab[i]);
		free(tab);
	}
	return (0);
}
