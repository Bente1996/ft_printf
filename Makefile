NAME := libftprintf.a
HEADERFILES := libft.h \
ft_printf.h
SRCFILES := ft_printf.c \
ft_putchar.c \
ft_putstr.c \
ft_putnbr_signed.c \
ft_putnbr_unsigned.c \
ft_putadress.c

OBJFILES := $(SRCFILES:.c=.o)
CFLAGS ?= -Wall -Wextra -Werror -c

all : $(NAME)

$(NAME): $(OBJFILES)
	ar -rcs $(NAME) $(OBJFILES)

%.o: %.c $(HEADERFILES)
	cc $(CFLAGS) $< -Ilibft/

clean:
	rm -f $(OBJFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re