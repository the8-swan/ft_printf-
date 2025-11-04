#include "libftprintf.h"


int ft_conversions(char fs, va_list list)
{
    int  counter;

    counter = 0;
    if(fs == 's'){
        counter = ft_putstr(va_arg(list,char *));
    }else if(fs == 'c'){
        counter = ft_putchar(va_arg(list,int));
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

    printf("%d \n",ft_printf("%s oumaima \n","hello"));
    printf("%d \n",printf("%s oumaima \n","hello"));


    return 0;
}