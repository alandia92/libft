/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:22:18 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/25 19:29:18 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		write (fd, &s[i], 1);
		i++;
	}
}
