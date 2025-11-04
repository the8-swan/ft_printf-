#include "libftprintf.h"

char *ft_hex(char fs)
{
    if(fs == 'x'){
        return("0123456789abcdef");
    }
    return("0123456789ABCDEF");
}

int ft_puthex(unsigned int nb, char fs)
{
    char    *ptr;
    char    digits[10];
    int i;
    int counter;

    i = 0;
    ptr = ft_hex(fs);
    //printf("%s",ptr);
    while (nb + 1 >= 1)
	{
		digits[i++] = ptr[(nb % 16)] ;
		nb /= 16;
		if (nb == 0)
			break ;
	}
    counter = i;
    while (i > 0)
		write(1, &digits[--i], 1);
    return (counter);
}