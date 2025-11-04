/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:33:13 by obakri            #+#    #+#             */
/*   Updated: 2025/11/04 17:35:17 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthex(unsigned int nb, char fs);
int	ft_putaddress(unsigned long nb);

#endif
