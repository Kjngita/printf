NAME = libftprintf.a

CFILES = 

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

.PHONY: all clean fclean re
