/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:32:22 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/23 10:11:34 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (i + 1 < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int		main()
{
	char s1[] = "BLABLA";
	char *s2 = NULL;
	char s3[] = "TEST";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d",
	ft_strncmp(s1, s2, 0), ft_strncmp(s2, s1, 0),
	ft_strncmp(s1, s3, 2), ft_strncmp(s3, s1, 2),
	ft_strncmp(s2, s3, 2), ft_strncmp(s3, s2, 2));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", 
	strncmp(s1, s2, 0), strncmp(s2, s1, 0),
	strncmp(s1, s3, 2), strncmp(s3, s1, 2), strncmp(s2, s3, 2),
	strncmp(s3, s2, 2));
	}*/
