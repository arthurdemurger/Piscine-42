/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:02:42 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 10:09:05 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int		main()
{
	char s1[] = "abd";
	char *s2 = "abc";
	char *s3 = "abe";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d",
	ft_strcmp(s1, s2), ft_strcmp(s2, s1), ft_strcmp(s1, s3), 
	ft_strcmp(s3, s1), ft_strcmp(s2, s3), ft_strcmp(s3, s2));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d",
	strcmp(s1, s2), strcmp(s2, s1), strcmp(s1, s3), strcmp(s3, s1),
	strcmp(s2, s3), strcmp(s3, s2));
}*/
