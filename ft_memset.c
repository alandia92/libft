/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:36:40 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/06 15:19:18 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*auxpt;

	i = 0;
	auxpt = (unsigned char *)str;
	while (i < n)
	{
		auxpt[i] = (unsigned char) c;
		i++;
	}
	return ((void *) auxpt);
}
