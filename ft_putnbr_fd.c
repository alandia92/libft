/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:46:55 by arlandia          #+#    #+#             */
/*   Updated: 2022/09/25 20:18:12 by arlandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	number;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = (unsigned int)(n * -1);
	}
	else
	{
		number = (unsigned int)(n);
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	ft_putchar_fd((char)(number % 10 + '0'), fd);
}
