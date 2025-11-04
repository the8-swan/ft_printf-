/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:04:12 by obakri            #+#    #+#             */
/*   Updated: 2025/11/04 14:17:01 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversions(char fs, va_list list)
{
	int	counter;

	counter = 0;
	if (fs == 's')
		counter = ft_putstr(va_arg(list, char *));
	else if (fs == 'c')
		counter = ft_putchar(va_arg(list, int));
	else if (fs == 'd' || fs == 'i')
		counter = ft_putnbr(va_arg(list, int));
	else if (fs == 'u')
		counter = ft_putnbr_unsigned(va_arg(list, unsigned int));
	else if (fs == 'x' || fs == 'X')
		counter = ft_puthex(va_arg(list, unsigned int), fs);
	else if (fs == 'p')
		counter = ft_putaddress(va_arg(list, unsigned long));
	else if (fs == '%')
		counter = ft_putchar('%');
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	int			i;
	va_list		args;
	int			counter;

	i = 0;
	counter = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			counter += ft_conversions(s[i], args);
		}
		else
		{
			counter += ft_putchar(s[i]);
			i++;
		}
	}
	return (counter);
}
//int main(){
//          ft_printf("%%%% %h\n");
//          printf("%%%%h\n");
//           return 0;
//   }
