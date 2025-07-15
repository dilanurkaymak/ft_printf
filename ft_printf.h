#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_strlen(const char *s);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_put_unsigned(unsigned int n);
int ft_puthex(unsigned int n, char format);
int ft_putptr(unsigned long n);

#endif
