/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:33:03 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/18 22:02:08 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_arg(va_list args, char format)
{
	if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	if (format == 'i' || format == 'd')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	if (format == 'u')
		return (ft_putnbr_uns(va_arg(args, unsigned int)));
	if (format == 'p')
		return (ft_putadd(va_arg(args, void *)));
	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	if (format == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (format == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, s);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			count += ft_put_arg(args, s[i + 1]);
			i++;
		}
		else
			count += write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
