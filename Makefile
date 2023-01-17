# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 10:40:05 by juwkim            #+#    #+#              #
#    Updated: 2023/01/17 16:43:42 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler and flags

CC					:=	cc
CFLAGS				:=	-Wall -Wextra -Werror -march=native -O2 -pipe -MMD -fsanitize=leak -fsanitize=address

# Define the directories

MAGIC_DIR			:=	algorithms-and-data-structures
LIBFT_DIR			:=	libft

OPERATIONS_DIR		:=	operations
PARSE_DIR			:=	parse
SOLVE_DIR			:=	solve
CHECKER_DIR			:=	checker

SRC_DIR				:=	sources
BUILD_DIR			:=	build
INC_DIR				:=	-I includes -I $(MAGIC_DIR)/includes -I $(LIBFT_DIR)/includes

# Define the libraries

MAGIC				:=	$(MAGIC_DIR)/magic.a
LIBFT				:=	$(LIBFT_DIR)/libft.a

# Define the source files

OPERATIONS_SRC		:=	$(addprefix $(OPERATIONS_DIR)/, push.c reverse_rotate.c rotate.c swap.c)
PARSE_SRC			:=	$(addprefix $(PARSE_DIR)/, parse.c)
SOLVE_SRC			:=	$(addprefix $(SOLVE_DIR)/, a_to_b.c b_to_a.c restore.c set_pivot.c)
CHECKER_SRC			:=	$(addprefix $(CHECKER_DIR)/, checker.c)

PUSHSWAP_SRCS		:=	$(addprefix $(SRC_DIR)/, main.c $(OPERATIONS_SRC) $(PARSE_SRC) $(SOLVE_SRC))
PUSHSWAP_OBJS		:=	$(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(PUSHSWAP_SRCS))
PUSHSWAP_DEPS		:=	$(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.d, $(PUSHSWAP_SRCS))

PUSHSWAP			:=	push_swap

CHECKER_SRCS		:=	$(addprefix $(SRC_DIR)/, $(CHECKER_SRC) $(OPERATIONS_SRC) $(PARSE_SRC))
CHECKER_OBJS		:=	$(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(CHECKER_SRCS))
CHECKER_DEPS		:=	$(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.d, $(CHECKER_SRCS))

CHECKER				:=	checker


# Define the variables for progress bar

TOTAL_FILES			:=	$(shell find $(SRC_DIR) -type f -name "*.c" | wc -l)
COMPILED_FILES		:=	0
STEP				:=	100


# Define the rules

all:
	@$(MAKE) -C $(MAGIC_DIR)
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -j $(PUSHSWAP)

bonus: all
	@$(MAKE) -j $(CHECKER)

$(PUSHSWAP): $(PUSHSWAP_OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ $(LIBFT) $(MAGIC) $(LIBFT)
	@printf "\n$(MAGENTA)[PUSHSWAP] Linking Success\n$(DEF_COLOR)"

$(CHECKER): $(CHECKER_OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ $(LIBFT) $(MAGIC) $(LIBFT)
	@printf "\n$(MAGENTA)[PUSHSWAP] Linking Success $@\n$(DEF_COLOR)"

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.c | dir_guard
	@$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@
	$(eval COMPILED_FILES = $(shell expr $(COMPILED_FILES) + 1))
	$(eval PROGRESS = $(shell expr $(COMPILED_FILES) "*" $(STEP) / $(TOTAL_FILES)))
	@printf "                                                                                                   \r"
	@printf "$(YELLOW)[PUSHSWAP] [%02d/%02d] ( %3d %%) Compiling $<\r$(DEF_COLOR)" $(COMPILED_FILES) $(TOTAL_FILES) $(PROGRESS)

dir_guard:
	@mkdir -p $(addprefix $(BUILD_DIR)/, $(OPERATIONS_DIR))
	@mkdir -p $(addprefix $(BUILD_DIR)/, $(PARSE_DIR))
	@mkdir -p $(addprefix $(BUILD_DIR)/, $(SOLVE_DIR))
	@mkdir -p $(addprefix $(BUILD_DIR)/, $(CHECKER_DIR))

norm:
	@(norminette | grep Error) || (printf "$(GREEN)[PUSHSWAP]:\tNorminette Success\n$(DEF_COLOR)")

clean:
	@$(MAKE) -C $(MAGIC_DIR) clean
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(RM) -r $(BUILD_DIR)
	@printf "$(BLUE)[PUSHSWAP]:\tobj. dep. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

fclean:
	@$(MAKE) -C $(MAGIC_DIR) fclean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(RM) -r $(BUILD_DIR) $(PUSHSWAP) $(CHECKER)
	@printf "$(BLUE)[PUSHSWAP]:\tobj. dep. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"
	@printf "$(CYAN)[PUSHSWAP]:\texec. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

re: fclean
	@$(MAKE) all
	@printf "$(GREEN)Cleaned and rebuilt everything for pushswap!\n$(DEF_COLOR)"

.PHONY: all clean fclean re bonus dir_guard norm

#Colors

DEF_COLOR	=	\033[1;39m
YELLOW		=	\033[1;33m
GRAY		=	\033[1;90m
RED			=	\033[1;91m
GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[1;94m
MAGENTA		=	\033[1;95m
CYAN		=	\033[1;96m
WHITE		=	\033[1;97m

-include $(PUSHSWAP_DEPS) $(CHECKER_DEPS)
