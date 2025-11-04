#include "libftprintf.h"



int ft_putaddress(unsigned long nb)
{
    int counter;
    int		i;
	char	digits[16];
    char    *ptr;

    counter = 0;
    i = 0;
    ptr= "0123456789abcdef";
    if(nb == 0){
        counter = ft_putstr("(nil)");
    }else{
        while (nb > 0)
	    {
		    digits[i++] = ptr[(nb % 16)] ;
		    nb /= 16;
    	}
        counter += ft_putstr("0x");
        while(i){
            counter += write(1,&digits[--i],1);
        }
    }
        return (counter);
}