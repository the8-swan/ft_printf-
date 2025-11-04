NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRC = ft_putchar.c ft_putstr.c ft_printf.c ft_putnbr.c ft_putnbr_unsigned.c ft_puthex.c ft_putaddress.c

SRC_OBJ = $(SRC:.c=.o)


main:$(SRC_OBJ)
	$(CC) $(CFLAGS) $(SRC_OBJ) -o $@


clean:$(SRC_OBJ)
	rm -f $(SRC_OBJ)
