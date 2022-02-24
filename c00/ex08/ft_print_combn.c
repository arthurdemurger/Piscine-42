/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 08:49:53 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/03 08:59:19 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_write()
{

}

void ft_print_combn(int n)
{
	char	a;

	a = '0';

	while (a<=9)
	{
		
		while (a <= 9)
		{
			ft_putchar(a);
			a++;
		}



}
