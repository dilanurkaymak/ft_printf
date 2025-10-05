/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaymak <dkaymak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:45:00 by dilanur           #+#    #+#             */
/*   Updated: 2025/07/31 18:08:02 by dkaymak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_put_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(args, unsigned int), c);
	else if (c == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *type, ...)
{
	va_list	args;
	int		i;
	int		printed;

	if (!type)
		return (0);
	i = 0;
	printed = 0;
	va_start(args, type);
	while (type[i])
	{
		if (type[i] == '%')
		{
			i++;
			printed += ft_format(args, type[i]);
		}
		else
			printed += ft_putchar(type[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
