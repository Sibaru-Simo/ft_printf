/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 06:32:39 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/18 13:25:58 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hex_len(unsigned int n)
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

int	ft_puthex(unsigned int n, char format)
{
	char	*hex;

	if (format == 'x')
		hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex(n / 16, format);
	ft_putchar_fd(hex[n % 16], 1);
	return (ft_hex_len(n));
}
