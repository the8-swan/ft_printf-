NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRC = ft_putchar.c ft_putstr.c ft_printf.c ft_putnbr.c ft_putnbr_unsigned.c ft_puthex.c ft_putaddress.c

SRC_OBJ = $(SRC:.c=.o)



$(NAME) : $(SRC_OBJ)
	ar rcs $(NAME) $(SRC_OBJ)

all : $(NAME)
	
%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -f $(SRC_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re