/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:40:50 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/18 19:09:16 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	n;

	sign = 1;
	i = 0;
	n = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
			sign = -1;
			i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * n));
}
