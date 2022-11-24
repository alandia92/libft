/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:50:30 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/27 18:00:03 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*copy;

	copy = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (copy == 0)
		return (0);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		copy[i] = s2[j];
		j++;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
