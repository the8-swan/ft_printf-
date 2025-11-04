/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:23:39 by obakri            #+#    #+#             */
/*   Updated: 2025/11/04 14:28:21 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_hex(char fs)
{
	if (fs == 'x')
		return ("0123456789abcdef");
	return ("0123456789ABCDEF");
}

int	ft_puthex(unsigned int nb, char fs)
{
	char		*ptr;
	char		digits[10];
	int			i;
	int			counter;
	long		n;

	i = 0;
	ptr = ft_hex(fs);
	n = nb;
	while (n + 1 >= 1)
	{
		digits[i++] = ptr[(n % 16)];
		n /= 16;
		if (n == 0)
			break ;
	}
	counter = i;
	while (i > 0)
		write(1, &digits[--i], 1);
	return (counter);
}
