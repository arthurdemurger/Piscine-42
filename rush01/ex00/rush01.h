/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:37:30 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/13 22:42:51 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H

# define RUSH01_H

// libraries
# include <stdlib.h>
# include <unistd.h>

// basics
void	ft_putchar(char c);

// check
int		check(int **tab, int x, int y, int n);

// backtrack
void	fill(int **tab, int x, int y, int *c);
int		max_plus_line(int *tab);
int		max_minus_line(int *tab);
int		max_plus_col(int **tab, int x);
int		max_minus_col(int **tab, int x);
void	print_possible(int **tab, int *c);

// collect of input
void	collect_rows(int **tab, char *str);
void	collect_col(int **tab, char *str);

// initialisation
void	ft_tab_init(int **tab, char *str);

// print
void	ft_print_tab(int **tab);

// error
void	error(void);
int		check_arg(char *str);

#endif
