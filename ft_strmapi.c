/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:24:50 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/25 18:50:31 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (s == 0)
		return (0);
	str = malloc(sizeof (char) * ft_strlen(s) + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f (i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
