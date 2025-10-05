/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:08:05 by dkaymak           #+#    #+#             */
/*   Updated: 2025/07/17 16:08:06 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_format(va_list args, char c);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_put_unsigned(unsigned int n);
int		ft_puthex(unsigned int n, char format);
int		ft_putptr(unsigned long n);
int		ft_print_ptr(void *ptr);
int		ft_putnbr_base(unsigned long n, char *base);

#endif
