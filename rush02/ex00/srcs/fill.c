/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:24:36 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/20 23:00:33 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

// Fill the tabs with the big numbers in letters
void	fill_big_ltr(char *ltr, char ***tab, char *dict, long nb)
{
	int	size;
	int	nb_big;
	int	j;
	int	i;

	i = -1;
	j = -1;
	nb_big = counter_big_nb(dict);
	size = ft_strlen(ltr);
	if (nb == 1000)
		i = 0;
	else if (nb == 1000000)
		i = 1;
	else if (nb == 1000000000)
		i = 2;
	if (i != -1)
	{
		tab[3][i] = (char *)malloc(sizeof(char) * size + 1);
		while (++j < size)
			tab[3][i][j] = ltr[j];
		tab[3][i][j] = '\0';
	}
}

// Fill numbers greater or equal to 1000
void	fill_big_numbers(char *dict, char ***tab, long nb, int index)
{
	int		i;

	i = index;
	if (nb == 1000 || nb == 1000000 || nb == 1000000000)
	{
		while ((dict[i] >= '0' && dict[i] <= '9')
			|| dict[i] == ' ' || dict[i] == ':')
			i++;
		fill_big_ltr(&dict[i], tab, dict, nb);
		while (dict[i] != '\n' && dict[i] != '\0')
			i++;
		if (dict[i] == '\n')
			i++;
	}
}

// Fill the tabs with the small numbers in letters
void	fill_small_ltr(char *ltr, long nb, char ***tab)
{
	int	i;
	int	size;

	size = ft_strlen(ltr);
	i = -1;
	if (nb < 20)
	{
		tab[0][nb] = (char *)malloc(sizeof(char) * size + 1);
		while (++i < size)
			tab[0][nb][i] = ltr[i];
		tab[0][nb][i] = '\0';
	}
	else if (nb < 100)
	{
		tab[1][nb - 20] = (char *)malloc(sizeof(char) * size + 1);
		while (++i < size)
			tab[1][nb - 20][i] = ltr[i];
		tab[1][nb - 20][i] = '\0';
	}
	else if (nb < 1000)
		trop_de_ligne(tab, nb, size, ltr);
}

// Fill numbers between 0 and 999
void	fill_small_numbers(char *name_file, char *dict, char ***tab)
{
	int		i;
	long	nb;

	nb = -1;
	i = 0;
	while (i < ft_nb_char(name_file))
	{
		if (check_un_int(&dict[i]))
			nb = ft_ln_atoi(&dict[i]);
		while ((dict[i] >= '0' && dict[i] <= '9')
			|| dict[i] == ' ' || dict[i] == ':' || dict[i] == '+')
			i++;
		if (nb > 999)
			fill_big_numbers(dict, tab, nb, i);
		else if (nb != -1)
			fill_small_ltr(&dict[i], nb, tab);
		while (dict[i] != '\n' && dict[i] != '\0')
			i++;
		if (dict[i] == '\n')
			i++;
		if (nb == 1000000000)
			return ;
	}
}

// Prefill and fill the tabs
char	***fill(char *name_file)
{
	char	***tab;
	char	*dict;

	dict = numbers_recup(name_file);
	tab = malloc_tab(dict);
	if (!tab)
		return (NULL);
	fill_small_numbers(name_file, dict, tab);
	return (tab);
}
//if (!dict_error(dict))
	//	return (NULL);