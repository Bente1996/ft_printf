# NAME := libftprintf.a, eerst printf
NAME := libftprintf.a
EXEC_NAME := ft_printf
HEADERFILES := libft.h ft_printf.h
SRCFILES := ft_printf.c \
ft_putchar.c \
ft_putstr.c \
ft_putnbr_signed.c \
ft_putnbr_unsigned.c \
ft_putaddress.c \
ft_puthexa_low.c \
ft_puthexa_up.c \



OBJFILES := $(SRCFILES:.c=.o)
CFLAGS ?= -Wall -Wextra -Werror -ILibft/
LIBFT_A := Libft/libft.a

all : $(NAME)

run: $(NAME) $(EXEC_NAME)
	./$(EXEC_NAME)

# Create the library
# $(NAME): $(OBJFILES) $(LIBFT_A)
# 	ar -rcs $(NAME) $(OBJFILES) $(LIBFT_A)


$(NAME): $(OBJFILES) $(LIBFT_A)
	cp $(LIBFT_A) $(NAME)
	ar -cr $(NAME) $(OBJFILES)

$(EXEC_NAME): $(NAME) main.c
	$(CC) main.c -L./ -lftprintf $(CFLAGS) -o $(EXEC_NAME)

# Object file rule
%.o: %.c $(HEADERFILES)
	cc $(CFLAGS) -c $<

# Build Libft library
$(LIBFT_A):
	$(MAKE) -C Libft

clean:
	rm -f $(OBJFILES)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re