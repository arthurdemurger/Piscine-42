/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:04:55 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/21 23:36:00 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, str++, 1);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (i > 0)
		ft_putstr(argv[i--]);
}
