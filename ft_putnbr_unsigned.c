/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:33:09 by obakri            #+#    #+#             */
/*   Updated: 2025/11/04 14:33:32 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
 
static int	ft_printer(char* digits, int length)
{
	int	counter;

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
	long	n;

	i = 0;
	n = nb;
	while (n >= 0)
	{
		digits[i++] = (n % 10) + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	return (ft_printer(digits,i));
}
