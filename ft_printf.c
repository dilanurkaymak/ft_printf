#include "ft_printf.h"

int ft_putstr(char *s)
{
    int count = 0;
    if (!s)
        s = "(null)";
    while (*s)
        count += ft_putchar(*s++);
    return (count);
}

int ft_putnbr(int n)
{
    long num = n;
    int count = 0;

    if (num < 0)
    {
        count += ft_putchar('-');
        num = -num;
    }
    if (num >= 10)
        count += ft_putnbr(num / 10);
    count += ft_putchar((num % 10) + '0');
    return (count);
}

int ft_put_unsigned(unsigned int n)
{
    int count = 0;

    if (n >= 10)
        count += ft_put_unsigned(n / 10);
    count += ft_putchar((n % 10) + '0');
    return (count);
}

int ft_format(va_list args, char c)
{
    if (c == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if (c == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if (c == 'd' || c == 'i')
        return (ft_putnbr(va_arg(args, int)));
    else if (c == 'u')
        return (ft_put_unsigned(va_arg(args, unsigned int)));
    else if (c == 'x' || c == 'X')
        return (ft_puthex(va_arg(args, unsigned int), c));
    else if (c == 'p')
    {
        int count = 0;
        count += ft_putstr("0x");
        count += ft_putptr(va_arg(args, unsigned long));
        return (count);
    }
    else if (c == '%')
        return (ft_putchar('%'));
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    int printed = 0;

    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
            printed += ft_format(args, format[++i]);
        else
            printed += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (printed);
}
