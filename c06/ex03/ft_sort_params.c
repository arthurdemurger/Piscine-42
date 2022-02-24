/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:48:01 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/21 23:41:34 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, str++, 1);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **tab, int size)
{
	int		i;
	char	*x;
	int		j;

	i = 1;
	while (i < size)
	{
		x = tab[i];
		j = i;
		while (j > 0 && ft_strcmp(tab[j - 1], x) > 0)
		{
			tab[j] = tab[j - 1];
			j -= 1;
		}
		tab[j] = x;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_sort_params(&argv[1], argc - 1);
	while (++i < argc)
		ft_putstr(argv[i]);
}
