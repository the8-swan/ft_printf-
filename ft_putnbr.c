
#include "ft_printf.h"

static int ft_printer(char* digits, int nb, int length)
{
    int counter;

    counter = 0;
    if(nb < 0)
    {
        counter += write(1,"-",1);
    }
    while(length){
        counter += write(1,&digits[--length],1);
    }
    return (counter);
}



int ft_putnbr(int nb)
{
    int		i;
	char	digits[10];
	long	number;

	i = 0;
	number = nb;
	if (nb < 0)
		number = -number;
	while (number >= 0)
	{
		digits[i++] = (number % 10) + '0';
		number /= 10;
		if (number == 0)
			break ;
	}
	return (ft_printer(digits,nb,i));
}