NAME = push_swap


SRCS := main.c\
		create_node.c\
		treat_digit.c\
		error.c\
		coordinate_compression.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBS = -L libft -lft
LIBFT = libft/libft.a

all: 	$(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@ $(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME) $(LIBS)
	@echo "conpiled!"

$(LIBFT):
	$(MAKE) -C libft/

clean:
		@ $(RM) $(OBJS)
		$(MAKE) -C libft clean
		@echo "cleaned!"

fclean:	clean
		@ $(RM) $(NAME)
		$(MAKE) -C libft fclean
		@echo "all cleaned!"

re: fclean all

.PHONY :  all clean fclean re
