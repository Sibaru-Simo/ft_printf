/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 07:26:56 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/18 13:26:41 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_len(unsigned int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_uns(unsigned int n)
{
	if (n >= 10)
		ft_putnbr_uns(n / 10);
	ft_putchar_fd(n % 10 + 48, 1);
	return (ft_len(n));
}
