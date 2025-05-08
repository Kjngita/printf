NAME = libftprintf.a

CFILES = ft_printf.c \
	char_related.c \
	num_related.c

OFILES = $(CFILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

%.o: %.c
	cc $(FLAGS) -c $<

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: main.c $(NAME)
	cc $(FLAGS) $^ -o cuckoo
	./cuckoo
	rm $(OFILES)

.SILENT:

.PHONY: all clean fclean re
