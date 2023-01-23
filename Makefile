#SELL COLORS
LRED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
LBLUE = \033[34;1m
PINK = \033[35m
LCYAN = \033[36m
END = \033[0m

#PROGRAM NAME
NAME = push_swap

#SOURCES AND OBJECTS
SRC_NAME =	push_swap.c \
			parse.c \
			is_tab_sorted.c \
			initialize_values.c \
			initializing_operations.c \
			initializing_operations2.c \
			initializing_operations3.c \
			small_arrays.c \
			small_arrays2.c \
			allocate_tab_b.c \
			algo.c \
			handle_memory.c \
			src_utils.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC_PATH = src/
OBJ_PATH = obj/

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

#COMPILATION
CC = cc
FLAGS = -Wall -Wextra -Werror -g3 -I inc

#LIBRARY
LIBFT  = ./libft/libft.a -I libft/inc

all: link $(NAME)

link:
	@ make -C libft/

$(NAME):$(OBJ)
		@ $(CC) $(FLAGS) $^ $(LIBFT) $(MLX) -o $@
		@ echo "$(GREEN)Compilation done : push_swap is ready to be used!$(END)"

$(OBJ_PATH)%.o:$(SRC_PATH)%.c
		@ mkdir -p $(OBJ_PATH)
		@ $(CC) $(FLAGS) -o $@ -c $<

$(OBJ_PATH)%.o:$(SRC_PATH)%.c
		@ mkdir -p $(OBJ_PATH)
		@ $(CC) $(FLAGS) -o $@ -c $<

clean:
		@ make -C libft/ clean
		@ rm -vf $(OBJ)
		@ rm -rfv $(OBJ_PATH)
		@ echo "$(PINK)Cleaning is done!$(END)"

fclean: clean
		@ rm -vf $(NAME)
		@ make -C libft/ fclean
		@ echo "$(PINK)FCleaning is done!$(END)"

norm:
		@ echo "$(LBLUE)Norminette...$(END)"
		@ norminette src inc

re: 	fclean all

.PHONY: fclean all clean norm re so_long_only
