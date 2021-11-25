NAME = libftprintf.a

SRCS = 	ft_printf.c \
		ft_putchar_mod.c \
		ft_putstr_mod.c \
		ft_putnbr_mod.c \
		ft_strlen.c \
		ft_uns_putnbr_mod.c \
		to_hexa.c \
		to_hexa_upper.c \
		adress.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

all: $(NAME)

%.o : %.c $(HEADER) Makefile
	$(CC) $(FLAGS) -I includes -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)  

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re