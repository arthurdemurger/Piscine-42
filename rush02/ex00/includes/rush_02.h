/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:31:53 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/20 21:06:01 by swijnber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H

# define RUSH_02_H

// Define
# define ERROR "Error\n"

// Libraries
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

// Check
long	check_un_int(char *str);
int		check_arg(int argc, char **argv);
int		ft_nb_char(char *name_file);
char	*numbers_recup(char *name_file);
int		counter_big_nb(char *dict);
int		dict_error(char *str);

// Table Creation
char	***malloc_tab(char *dict);
char	***fill(char *dict);
void	trop_de_ligne(char ***tab, long nb, int size, char *ltr);

// Basics
void	put_str(char *str);
long	ft_ln_atoi(char *str);
char	*ft_strstr(char *str, char *to_find);
int		ft_strlen(char *str);

// Writing
void	writing(unsigned int nb, char ***tab);

#endif
