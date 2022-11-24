/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:42:24 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/20 16:48:29 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;

	if (len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s);
	if (start > (unsigned int)ft_strlen(s))
		start = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == 0)
		return (0);
	i = 0;
	while (s[i + start] && len)
	{
		copy[i] = s[i + start];
		i++;
		len--;
	}
	copy[i] = '\0';
	return (copy);
}
