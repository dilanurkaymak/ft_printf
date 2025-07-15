#include "ft_printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_strlen(const char *s)
{
    int i = 0;
    while (s && s[i])
        i++;
    return (i);
}
