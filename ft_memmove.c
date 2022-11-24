/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:16:08 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/25 18:22:59 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		while (len --)
		{
			((unsigned char *)dst)[len] = ((const char *)src)[len];
		}
	}
	else if (dst < src)
	{
		while (i < len)
		{
		((unsigned char *)dst)[i] = ((const char *)src)[i];
		i++;
		}
	}
	return (dst);
}
