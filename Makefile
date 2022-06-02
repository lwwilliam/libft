NAME		= libft.a

SRCS		= *.c

OBJS		= $(SRCS:.c=.o)

FLAGS		= -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

yes:
	gcc $(FLAGS) ft_strtrim.c ft_strlen.c ft_strchr.c ft_strrchr.c
	./a.out

.PHONY: all clean fclean re yes