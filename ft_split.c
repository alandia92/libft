/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:00:47 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/28 16:59:36 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cont(const char *s, char c)
{
	size_t	i;
	char	*str;
	size_t	cont;

	i = 0;
	cont = 0;
	str = (char *)s;
	if (str[i] && str[i] != c)
		cont++;
	i = 0;
	while (i < (size_t) ft_strlen(s))
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1])
				cont++;
		i++;
	}
	return (cont);
}

static int	ft_untilc(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i++;
	}
	return (i);
}

static char	*ft_cut(const char *str, int len, char **split)
{
	char	*s;
	size_t	i;

	s = malloc(sizeof(char) * (len + 1));
	if (s == 0)
	{
		free(split);
		return (0);
	}
	i = 0;
	while (len--)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**split;
	size_t	i;
	size_t	j;

	if (s == 0)
		return (0);
	size = ft_cont(s, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (split == 0)
		return (0);
	i = 0;
	while (size > i)
	{
		j = ft_untilc(s, c);
		if (j)
		{
			split[i] = ft_cut(s, j, split);
			i++;
		}
		s = s + j + 1;
	}
	split[i] = 0;
	return (split);
}
