/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:52:33 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/16 17:53:00 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

char	*ft_strdup(char *src, char *charset)
{
	int		i;
	int		c;
	char	*str;

	i = 0;
	c = 0;
	while (src[c] != '\0')
		c++;
	str = (char *)malloc(sizeof(char) * (c + 1));
	while (src[i] && !is_charset(charset, src[i]))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] && is_charset(charset, str[i]))
			i++;
		if (str[i] && !is_charset(charset, str[i]))
			c++;
		while (str[i] && !is_charset(charset, str[i]))
			i++;
	}
	return (c);
}

int	ft_index(char *str, char *charset, int index)
{
	int	i;
	int	c;
	int	j;

	j = -1;
	i = 0;
	c = 0;
	while (str[i] && c != index)
	{
		while (str[i] && is_charset(charset, str[i]))
			i++;
		if (str[i] && !is_charset(charset, str[i]))
		{
			c++;
			j = i;
		}
		while (str[i] && !is_charset(charset, str[i]))
			i++;
	}
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size;
	char	**split;

	size = count_words(str, charset);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	i = -1;
	while (++i < count_words(str, charset))
		split[i] = ft_strdup(&str[ft_index(str, charset, i + 1)], charset);
	split[i] = 0;
	return (split);
}
