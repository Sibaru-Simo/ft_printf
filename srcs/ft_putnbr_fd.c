/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:28:20 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/18 13:37:23 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		count += ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
		count += ft_putnbr_fd(nb / 10, fd);
	count += ft_putchar_fd(nb % 10 + 48, fd);
	return (count);
}
