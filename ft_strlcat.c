/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:19:38 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/13 19:00:16 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest;
	size_t	s;

	dest = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (dstsize <= dest || dst == 0)
		return (dstsize + s);
	while ((dstsize - dest - 1) > i && src[i])
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + s);
}
