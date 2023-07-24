SRCS := 


OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap.a

all: 	$(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: fclean all
