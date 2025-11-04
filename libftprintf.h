#include <unistd.h>
#include <stdio.h>

#include <stdarg.h>


#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

int ft_printf(const char *s, ...);
int ft_putstr(char *s);
int ft_putnbr(int nb);
int ft_putchar(char c);
int ft_putnbr_unsigned(unsigned int nb);
int ft_puthex(unsigned int nb, char fs);
int ft_putaddress(unsigned long nb);

#endif