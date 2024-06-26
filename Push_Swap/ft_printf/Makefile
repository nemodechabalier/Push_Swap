# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 16:26:00 by nde-chab          #+#    #+#              #
#    Updated: 2024/06/04 13:51:24 by nde-chab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I .

NAME = libftprintf.a

FUNC += ft_printf.c 
FUNC += ft_putchar.c 
FUNC += ft_putstr.c 
FUNC += ft_putnbr.c 
FUNC += ft_print_base.c
FUNC += ft_putunbr.c



OBJS = $(FUNC:.c=.o)
OBJSALL = $(FUNCALL:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ 

$(NAME) : $(OBJS)
	ar -rsc $(NAME) $(OBJS)

all : $(NAME)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all


.PHONY : all bonus fclean re 