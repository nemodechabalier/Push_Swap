# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/27 10:27:44 by nde-chab          #+#    #+#              #
#    Updated: 2024/06/27 12:23:43 by nde-chab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
LIBFT = libft_all/libft_printf_gnl.a
CC = cc
FLAGS = -Wall -Wextra -Werror -g3
INCLUDES = -I .

SRCS_DIR = srcs/Push_Swap/
SRCS_BONUS_DIR = srcs/bonus_checker/

FUNC = algo.c error_gestion.c struct_utils_2.c utils_algo2.c utils_algo.c utils_reverse.c utils_swap.c \
       creat_data.c struct_utils.c utils_algo_3.c utils_push.c utils_rotate.c

FUNC_BONUS = read_and_do.c utils_push_c.c utils_reverse_c.c utils_rotate_c.c utils_swap_c.c

MAIN = main_pushswap.c $(FUNC)
MAIN_BONUS = main_checker.c $(FUNC_BONUS)

SRCS_PUSH = $(addprefix $(SRCS_DIR), $(MAIN))
SRCS_CHECKER = $(addprefix $(SRCS_BONUS_DIR), $(MAIN_BONUS))
SRCS_CHECKER += $(addprefix $(SRCS_DIR), $(FUNC))

OBJS_DIR = obj/
OBJS = $(addprefix $(OBJS_DIR), $(notdir $(SRCS_PUSH:.c=.o)))
OBJS_BONUS = $(addprefix $(OBJS_DIR), $(notdir $(SRCS_CHECKER:.c=.o)))

# Rule to compile .c files to .o files
$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	$(MAKE) -C libft_all/
	@mkdir -p $(OBJS_DIR)
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR)%.o: $(SRCS_BONUS_DIR)%.c
	$(MAKE) -C libft_all/
	@mkdir -p $(OBJS_DIR)
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

# Rule to create the final executable
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)

bonus: $(OBJS_BONUS) $(LIBFT)
	$(CC) $(FLAGS) $(OBJS_BONUS) $(LIBFT) -o $(NAME_BONUS)

# Clean object files
clean:
	$(MAKE) -C libft_all/ clean
	rm -rf $(OBJS_DIR)
	

# Full clean
fclean: clean
	$(MAKE) -C libft_all/ fclean
	rm -f $(NAME) $(NAME_BONUS)
	

# Recompile everything
re: fclean all bonus

# Default target
all: $(NAME)

.PHONY: all clean fclean re bonus
