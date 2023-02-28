# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 10:40:05 by juwkim            #+#    #+#              #
#    Updated: 2023/03/01 07:36:46 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------------------------------------------------------------------- #
#   Define the compiler and flags                                              #
# ---------------------------------------------------------------------------- #

CC                  :=	cc
CFLAGS              :=	-Wall -Wextra -Werror -march=native -O2 -pipe
CPPFLAGS            =	-I include -I $(LIBFT)/include -I $(LIBDS)/include
DEPFLAGS            =	-MMD -MP -MF $(OBJ_DIR)/$(DEP_DIR)/$*.d
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
PRECOMPUTATION_DIR  :=	precomputation
ATOB_CASE_DIR       :=	$(PRECOMPUTATION_DIR)/a_to_b_case
BTOA_CASE_DIR       :=	$(PRECOMPUTATION_DIR)/b_to_a_case

# ---------------------------------------------------------------------------- #
#   Define the source files                                                    #
# ---------------------------------------------------------------------------- #

PARSE_SRC           :=	$(wildcard $(PARSE_DIR)/*.c)
OPERATIONS_SRC      :=	$(wildcard $(OPERATIONS_DIR)/*.c)
SOLVE_SRC           :=	$(wildcard $(SOLVE_DIR)/*.c)
PRECOMPUTATION_SRC  :=	$(wildcard $(PRECOMPUTATION_DIR)/*.c)
ATOB_CASE_SRC       :=	$(wildcard $(ATOB_CASE_DIR)/*.c)
BTOA_CASE_SRC       :=	$(wildcard $(BTOA_CASE_DIR)/*.c)

PUSHSWAP_SRCS       :=	main.c $(PARSE_SRC) $(OPERATIONS_SRC) $(SOLVE_SRC) $(PRECOMPUTATION_SRC) $(ATOB_CASE_SRC) $(BTOA_CASE_SRC)
PUSHSWAP_OBJS       :=	$(patsubst %.c, $(OBJ_DIR)/%.o, $(PUSHSWAP_SRCS))
PUSHSWAP_DEPS       :=	$(patsubst %.c, $(DEP_DIR)/%.d, $(PUSHSWAP_SRCS))

CHECKER_SRCS        :=	checker.c $(PARSE_SRC) $(OPERATIONS_SRC)
CHECKER_OBJS        :=	$(patsubst %.c, $(OBJ_DIR)/%.o, $(CHECKER_SRCS))
CHECKER_DEPS        :=	$(patsubst %.c, $(DEP_DIR)/%.d, $(CHECKER_SRCS))

# ---------------------------------------------------------------------------- #
#   Define the variables for progress bar                                      #
# ---------------------------------------------------------------------------- #

TOTAL_FILES         :=	55
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
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LDLIBS)
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
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(PRECOMPUTATION_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(SOLVE_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(ATOB_CASE_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(BTOA_CASE_DIR))

	@mkdir -p $(addprefix $(DEP_DIR)/, $(PARSE_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(OPERATIONS_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(PRECOMPUTATION_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(SOLVE_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(ATOB_CASE_DIR))
	@mkdir -p $(addprefix $(DEP_DIR)/, $(BTOA_CASE_DIR))

norm:
	@(norminette | grep Error) || (printf "$(GREEN)[PUSHSWAP]:\tNorminette Success\n$(DEF_COLOR)")

test:
	$(MAKE) all
	@bash ./tester.sh

clean:
	@$(MAKE) -C $(LIBFT) clean
	@$(MAKE) -C $(LIBDS) clean
	@$(RM) -r $(OBJ_DIR) log_error
	@printf "$(BLUE)[PUSHSWAP] obj. dep. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

fclean:
	@$(MAKE) -C $(LIBFT) fclean
	@$(MAKE) -C $(LIBDS) fclean
	@$(RM) -r $(OBJ_DIR) $(PUSHSWAP) $(CHECKER) log_error
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

.PHONY: all clean fclean re bonus dir_guard norm test debug

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