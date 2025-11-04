#include "libftprintf.h"

static int ft_printer(char* digits, int length)
{
    int counter;

    counter = 0;
    while(length){
        counter += write(1,&digits[--length],1);
    }
    return (counter);
}

int ft_putnbr_unsigned(unsigned int nb)
{
    int		i;
	char	digits[10];

	i = 0;
	while (nb + 1 >= 1)
	{
		digits[i++] = (nb % 10) + '0';
		nb /= 10;
		if (nb == 0)
			break ;
	}
	return (ft_printer(digits,i));
}