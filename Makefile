NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iheaders
RM = rm -f
SRCS = srcs/*.c
OBJS = *.o
PRINTF = printf/libftprintf.a

all : $(NAME)

$(NAME):
	@$(MAKE) ./printf >/dev/null
	@$(CC) $(CFLAGS) $(SRCS) $(PRINTF) -o $(NAME)

clean:
	@$(MAKE) clean -C ./printf 
	@$(MAKE) clean -C ./printf/libft

fclean: clean
	@$(MAKE) fclean -C ./printf
	@$(MAKE) fclean -C ./printf/libft
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re