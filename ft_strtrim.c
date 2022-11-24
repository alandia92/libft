/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:41:10 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/28 16:50:53 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	finish;

	if (s1 == 0 && set == 0)
		return (0);
	start = 0;
	while (s1[start] && ft_isset(set, s1[start]))
		start++;
	finish = ft_strlen(s1);
	while (finish > start && ft_isset(set, s1[finish - 1]))
		finish--;
	str = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (finish > start)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
