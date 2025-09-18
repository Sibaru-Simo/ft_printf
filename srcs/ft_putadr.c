/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 07:14:17 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/18 13:26:59 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_add_len(unsigned long int n)
{
	int	count;

	count = 1;
	while (n >= 16)
	{
		n /= 16;
		count++;
	}
	return (count);
}

void	ft_printadd(unsigned long int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_printadd(n / 16);
	ft_putchar_fd(hex[n % 16], 1);
}

int	ft_putadd(void *p)
{
	unsigned long int	addr;

	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	addr = (unsigned long int)p;
	ft_putstr_fd("0x", 1);
	ft_printadd(addr);
	return (ft_add_len(addr) + 2);
}
