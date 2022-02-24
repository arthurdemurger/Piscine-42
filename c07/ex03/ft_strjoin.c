/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:53:26 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/24 17:54:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_size(char **strs, int size)
{
	int	i;
	int	taille;

	taille = 0;
	i = -1;
	while (++i < size)
		taille += ft_strlen(strs[i]);
	return (taille);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (0);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		taille;
	char	*tab;
	int		i;
	int		c;

	i = -1;
	c = 0;
	if (!size)
		return (ft_strdup(""));
	taille = ft_size(strs, size) + (size - 1) * ft_strlen(sep);
	tab = (char *)malloc((taille + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (++i < size)
	{
		ft_strcpy(&tab[c], strs[i]);
		c += ft_strlen(strs[i]);
		if (i < size -1)
		{
			ft_strcpy(&tab[c], sep);
			c += ft_strlen(sep);
		}
	}
	tab[c] = 0;
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char *text[10];

	text[0] = "pouet";
	text[1] = "yes";
	*(text + 2) = NULL;
	text[3] = "ft_strjoin";
	text[4] = "ah oue?";
	text[5] = "sadw";
	text[6] = "idap";
	*(text + 7) = "as";
	text[8] = "edaso";
	*(text + 9) = "dadas";

	printf("%s\n", ft_strjoin(10, text, " | "));
}*/
