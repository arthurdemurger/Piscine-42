/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:34:41 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/21 23:34:53 by ademurge         ###   ########.fr       */
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
	(void) argc;
	ft_putstr(argv[0]);
}
