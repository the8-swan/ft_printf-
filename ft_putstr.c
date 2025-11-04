#include "ft_printf.h"

int ft_putstr(char *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
    return (i);
}