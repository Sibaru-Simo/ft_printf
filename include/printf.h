/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:33:03 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/18 13:36:28 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_puthex(unsigned int n, char format);
int	ft_putnbr_fd(int n, int fd);
int	ft_putnbr_uns(unsigned int n);
int	ft_putadd(void *p);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);

#endif
