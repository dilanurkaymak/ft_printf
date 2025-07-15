#include "ft_printf.h"

int ft_puthex(unsigned int n, char format)
{
    char *base;
    int count = 0;

    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";

    if (n >= 16)
        count += ft_puthex(n / 16, format);
    count += ft_putchar(base[n % 16]);
    return (count);
}

int ft_putptr(unsigned long n)
{
    int count = 0;

    if (n >= 16)
        count += ft_putptr(n / 16);
    count += ft_putchar("0123456789abcdef"[n % 16]);
    return (count);
}
