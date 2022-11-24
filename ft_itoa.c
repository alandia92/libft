/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:02:56 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/28 16:38:53 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countnbr(int i)
{
	int	nbr;

	nbr = 0;
	if (i <= 0)
		nbr++;
	while (i)
	{
		i = i / 10;
		nbr++;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*charnbr;
	size_t	size;
	size_t	aux;

	aux = 0;
	size = ft_countnbr(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	charnbr = (char *)malloc (sizeof (char) * (size + 1));
	if (charnbr == 0)
		return (0);
	if (n < 0)
	{
		charnbr[0] = '-';
		n = n * -1;
		aux = 1;
	}
	charnbr[size] = '\0';
	while (size > aux)
	{
		charnbr[size - 1] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (charnbr);
}
