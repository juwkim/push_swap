# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 10:40:05 by juwkim            #+#    #+#              #
#    Updated: 2023/03/01 21:45:33 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------------------------------------------------------------------- #
#   Define the compiler and flags                                              #
# ---------------------------------------------------------------------------- #

CC                  :=	cc
CFLAGS              :=	-Wall -Wextra -Werror -march=native -O2 -pipe
CPPFLAGS            =	-I include -I $(LIBFT)/include -I $(LIBDS)/include
DEPFLAGS            =	-MMD -MP -MF $(DEP_DIR)/$*.d
LDFLAGS             =	-L $(LIBFT) -L $(LIBDS)
LDLIBS              := -l ft -l ds

ifdef DEBUG
	CFLAGS	+= -g -fsanitize=address,leak,undefined
endif

# ---------------------------------------------------------------------------- #
#   Define the libraries                                                       #
# ---------------------------------------------------------------------------- #

LIBFT               := libft
LIBDS               := libds

# ---------------------------------------------------------------------------- #
#   Define the directories                                                     #
# ---------------------------------------------------------------------------- #

SRC_DIR             :=	source
OBJ_DIR             :=	build/object
DEP_DIR             :=	build/dependency

PARSE_DIR           :=	parse
OPERATIONS_DIR      :=	operations
SOLVE_DIR           :=	solve
UTILS_DIR           :=	utils
PRECOMPUTATION_DIR  :=	precomputation
ATOB_CASE_DIR       :=	$(PRECOMPUTATION_DIR)/a_to_b_case
BTOA_CASE_DIR       :=	$(PRECOMPUTATION_DIR)/b_to_a_case

# ---------------------------------------------------------------------------- #
#   Define the source files                                                    #
# ---------------------------------------------------------------------------- #

PARSE_SRC           :=	$(wildcard $(SRC_DIR)/$(PARSE_DIR)/*.c)
OPERATIONS_SRC      :=	$(wildcard $(SRC_DIR)/$(OPERATIONS_DIR)/*.c)
SOLVE_SRC           :=	$(wildcard $(SRC_DIR)/$(SOLVE_DIR)/*.c)
UTILS_SRC           :=	$(wildcard $(SRC_DIR)/$(UTILS_DIR)/*.c)
PRECOMPUTATION_SRC  :=	$(wildcard $(SRC_DIR)/$(PRECOMPUTATION_DIR)/*.c)
ATOB_CASE_SRC       :=	$(wildcard $(SRC_DIR)/$(ATOB_CASE_DIR)/*.c)
BTOA_CASE_SRC       :=	$(wildcard $(SRC_DIR)/$(BTOA_CASE_DIR)/*.c)

PUSHSWAP_SRCS       :=	$(SRC_DIR)/main.c $(PARSE_SRC) $(OPERATIONS_SRC) $(SOLVE_SRC) $(UTILS_SRC) $(PRECOMPUTATION_SRC) $(ATOB_CASE_SRC) $(BTOA_CASE_SRC)
PUSHSWAP_OBJS       :=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(PUSHSWAP_SRCS))
PUSHSWAP_DEPS       :=	$(patsubst $(SRC_DIR)/%.c, $(DEP_DIR)/%.d, $(PUSHSWAP_SRCS))

CHECKER_SRCS        :=	$(SRC_DIR)/checker.c $(PARSE_SRC) $(OPERATIONS_SRC) $(UTILS_SRC)
CHECKER_OBJS        :=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(CHECKER_SRCS))
CHECKER_DEPS        :=	$(patsubst $(SRC_DIR)/%.c, $(DEP_DIR)/%.d, $(CHECKER_SRCS))

# ---------------------------------------------------------------------------- #
#   Define the variables for progress bar                                      #
# ---------------------------------------------------------------------------- #

TOTAL_FILES         :=	57
COMPILED_FILES      :=	0
STEP                :=	100

# ---------------------------------------------------------------------------- #
#   Define the name                                                            #
# ---------------------------------------------------------------------------- #

PUSHSWAP            :=	push_swap
CHECKER             :=	checker

# ---------------------------------------------------------------------------- #
#   Define the rules                                                           #
# ---------------------------------------------------------------------------- #

all:
	@$(MAKE) -C $(LIBFT)
	@$(MAKE) -C $(LIBDS)
	@$(MAKE) -j $(PUSHSWAP)

bonus: all
	@$(MAKE) -j $(CHECKER)

$(PUSHSWAP): $(PUSHSWAP_OBJS)
	@$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LDLIBS)
	@printf "\n$(MAGENTA)[PUSHSWAP] Linking Success\n$(DEF_COLOR)"

$(CHECKER): $(CHECKER_OBJS)
	@$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LDLIBS)
	@printf "\n$(MAGENTA)[PUSHSWAP] Linking Success checker\n$(DEF_COLOR)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | dir_guard
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(DEPFLAGS) -c $< -o $@
	$(eval COMPILED_FILES = $(shell expr $(COMPILED_FILES) + 1))
	$(eval PROGRESS = $(shell expr $(COMPILED_FILES) "*" $(STEP) / $(TOTAL_FILES)))
	@printf "                                                                                                   \r"
	@printf "$(YELLOW)[PUSHSWAP] [%02d/%02d] ( %3d %%) Compiling $<\r$(DEF_COLOR)" $(COMPILED_FILES) $(TOTAL_FILES) $(PROGRESS)

dir_guard:
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(PARSE_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(OPERATIONS_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(SOLVE_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(UTILS_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(PRECOMPUTATION_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(ATOB_CASE_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(BTOA_CASE_DIR))

	@mkdir -p $(addprefix $(DEP_DIR)/, $(PARSE_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(OPERATIONS_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(SOLVE_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(UTILS_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(PRECOMPUTATION_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(ATOB_CASE_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(BTOA_CASE_DIR))

norm:
	@$(MAKE) -C $(LIBFT) norm
	@$(MAKE) -C $(LIBDS) norm
	@(norminette include source | grep Error) || (printf "$(GREEN)[PUSHSWAP] Norminette Success\n$(DEF_COLOR)")

test:
	$(MAKE) all
	@bash ./tester.sh
	@$(RM) -r log_error

clean:
	@$(MAKE) -C $(LIBFT) clean
	@$(MAKE) -C $(LIBDS) clean
	@$(RM) -r build
	@printf "$(BLUE)[PUSHSWAP] obj. dep. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

fclean:
	@$(MAKE) -C $(LIBFT) fclean
	@$(MAKE) -C $(LIBDS) fclean
	@$(RM) -r build $(PUSHSWAP) $(CHECKER)
	@printf "$(BLUE)[PUSHSWAP] obj. dep. files$(DEF_COLOR)$(GREEN)  => Cleaned!\n$(DEF_COLOR)"
	@printf "$(CYAN)[PUSHSWAP] exec. files$(DEF_COLOR)$(GREEN)      => Cleaned!\n$(DEF_COLOR)"

re: fclean
	@$(MAKE) all
	@printf "$(GREEN)Cleaned and rebuilt everything for pushswap!\n$(DEF_COLOR)"

debug:
	@$(MAKE) fclean
	@$(MAKE) -C $(LIBFT) DEBUG=1
	@$(MAKE) -C $(LIBDS) DEBUG=1
	@$(MAKE) -j $(PUSHSWAP) DEBUG=1

.PHONY: all clean fclean re dir_guard norm test debug

# ---------------------------------------------------------------------------- #
#   Define the colors                                                          #
# ---------------------------------------------------------------------------- #

DEF_COLOR	=	\033[1;39m
GRAY		=	\033[1;90m
RED			=	\033[1;91m
GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[1;94m
MAGENTA		=	\033[1;95m
CYAN		=	\033[1;96m
WHITE		=	\033[1;97m

# ---------------------------------------------------------------------------- #
#   Include dependency files                                                   #
# ---------------------------------------------------------------------------- #

-include $(PUSHSWAP_DEPS) $(CHECKER_DEPS)
