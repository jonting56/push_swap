NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iheaders
RM = rm -f
SRCS = srcs/rotate.c srcs/sort_func.c srcs/randix.c srcs/lst_init.c srcs/push.c srcs/sort_5.c \
		srcs/lst_utils.c srcs/print_lst.c srcs/normalise.c srcs/push_swap.c
PRINTF = printf/libftprintf.a

all : $(NAME)

r:
	make
	clear
	./$(NAME) 50 4 20 3

$(NAME):
	@$(MAKE) ./printf >/dev/null
	@$(CC) $(CFLAGS) $(SRCS) $(PRINTF) -o $(NAME)

testp:
	@make
	@clear
	@echo "max ?" 
	@read PMAX; \
	python3 pyviz.py `ruby -e "puts (1..$$PMAX).to_a.shuffle.join(' ')"`;

clean:
	@$(MAKE) clean -C ./printf 
	@$(MAKE) clean -C ./printf/libft

fclean: clean
	@$(MAKE) fclean -C ./printf
	@$(MAKE) fclean -C ./printf/libft
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re