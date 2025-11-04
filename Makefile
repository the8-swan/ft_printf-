NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRC = ft_putchar.c ft_putstr.c ft_printf.c

SRC_OBJ = $(SRC:.c=.o)


main:$(SRC_OBJ)
	$(CC) $(CFLAGS) $(SRC_OBJ) -o $@


clean:$(SRC_OBJ)
	rm -f $(SRC_OBJ)
