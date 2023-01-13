# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 10:40:05 by juwkim            #+#    #+#              #
#    Updated: 2023/01/13 12:57:30 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler and flags

CC					=	cc
CFLAGS				=	-Wall -Wextra -Werror -march=native -O2 -pipe -MMD

# Define the directories

SRC_DIR				=	sources
BUILD_DIR			=	build
INC_DIR				=	-I includes -I $(LIB_DIR)/includes
LIB_DIR				=	libft


# Define the source files

LIBFT				=	$(LIB_DIR)/libft.a

PUSHSWAP_SRCS		=	$(addprefix $(SRC_DIR)/, deque.c push_swap.c ps_init.c ps_parse.c ps_atob.c ps_btoa.c ps_solve.c)
PUSHSWAP_OBJS		=	$(patsubst %.c, $(BUILD_DIR)/%.o, $(PUSHSWAP_SRCS))
PUSHSWAP_DEPS		=	$(patsubst %.c, $(BUILD_DIR)/%.d, $(PUSHSWAP_SRCS))

PUSHSWAP			=	push_swap

CHECKER_SRCS		=	$(addprefix $(SRC_DIR)/, deque.c ps_init.c ps_parse.c checker.c)
CHECKER_OBJS		=	$(patsubst %.c, $(BUILD_DIR)/%.o, $(CHECKER_SRCS))
CHECKER_DEPS		=	$(patsubst %.c, $(BUILD_DIR)/%.d, $(CHECKER_SRCS))

CHECKER				=	checker


# Define the variables for progress bar

TOTAL_FILES			:=	$(shell find $(SRC_DIR) -type f -name *.c | wc -l)
COMPILED_FILES		=	0
STEP				:=	100


# Define the rules

all: $(LIBFT) $(PUSHSWAP)

bonus: all $(CHECKER)

$(LIBFT):
	@$(MAKE) -C $(@D)

$(PUSHSWAP): $(PUSHSWAP_OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ $(LIBFT)
	@printf "\n$(MAGENTA)[PUSHSWAP] Linking Success\n$(DEF_COLOR)"

$(CHECKER): $(CHECKER_OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ $(LIBFT)
	@printf "\n$(MAGENTA)[PUSHSWAP] Linking Success $@\n$(DEF_COLOR)"

$(BUILD_DIR)/%.o : %.c | dir_guard
	@$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@
	$(eval COMPILED_FILES = $(shell expr $(COMPILED_FILES) + 1))
	$(eval PROGRESS = $(shell expr $(COMPILED_FILES) "*" $(STEP) / $(TOTAL_FILES)))
	@printf "                                                                                                   \r"
	@printf "$(YELLOW)[PUSHSWAP] [%02d/%02d] ( %3d %%) Compiling $<\r$(DEF_COLOR)" $(COMPILED_FILES) $(TOTAL_FILES) $(PROGRESS)

dir_guard:
	@mkdir -p $(addprefix $(BUILD_DIR)/, $(SRC_DIR))

norm:
	@(norminette | grep Error) || (printf "$(GREEN)[PUSHSWAP]:\tNorminette Success\n$(DEF_COLOR)")

clean:
	@$(MAKE) -C $(LIB_DIR) clean
	@$(RM) -r $(BUILD_DIR)
	@printf "$(BLUE)[PUSHSWAP]:\tobj. dep. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

fclean:
	@$(MAKE) -C $(LIB_DIR) fclean
	@$(RM) -r $(BUILD_DIR) $(PUSHSWAP) $(CHECKER)
	@printf "$(BLUE)[PUSHSWAP]:\tobj. dep. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"
	@printf "$(CYAN)[PUSHSWAP]:\texec. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

re: fclean
	@$(MAKE) all
	@printf "$(GREEN)Cleaned and rebuilt everything for pushswap!\n$(DEF_COLOR)"

.PHONY: all clean fclean re bonus dir_guard norm $(LIB_DIR)

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
