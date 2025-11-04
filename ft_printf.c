#include "libftprintf.h"


int ft_conversions(char fs, va_list list)
{
    int  counter;

    counter = 0;
    if(fs == 's'){
        counter = ft_putstr(va_arg(list,char *));
    }else if(fs == 'c'){
        counter = ft_putchar(va_arg(list,int));
    }else if(fs == 'd' || fs == 'i'){
        counter = ft_putnbr(va_arg(list,int));
    }else if(fs == 'u'){
        counter = ft_putnbr_unsigned(va_arg(list,unsigned int));
    }else if(fs == 'x' || fs == 'X'){
        counter = ft_puthex(va_arg(list,int),fs);
    }else if(fs == 'p'){
        counter = ft_putaddress(va_arg(list,unsigned long));
    }
    return (counter);
}





int ft_printf(const char *s, ...)
{
    int i;
    va_list args;
    int counter;

    i = 0;
    counter = 0;
    va_start(args,s);
    while(s[i]){
        if(s[i] == '%'){
            i++;
            counter +=ft_conversions(s[i],args);
        }else{
            counter +=  ft_putchar(s[i]);
        }
        i++;
    }
    return counter;
}

int main(){
    int a =9;
    printf("%d \n",ft_printf("%s %d %u %X %x %p oumaima \n","hello",123,-123,-999,-999,&a));
    printf("%d \n",printf("%s %d %u %X %x %p oumaima \n","hello",123,-123,-999,-999,&a));


    return 0;
}