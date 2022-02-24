/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:18:47 by ademurge          #+#    #+#             */
/*   Updated: 2022/02/22 22:19:21 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		moins;

	i = 0;
	moins = 1;
	nb = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			moins *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			nb = nb * 10 + str[i] - 48;
			i++;
	}
	return (nb * moins);
}
