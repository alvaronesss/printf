# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 15:57:50 by aporras-          #+#    #+#              #
#    Updated: 2024/07/11 18:14:24 by aporras-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c\
	ft_char.c \
	ft_hexam.c \
	ft_hexa.c \
	ft_integer.c \
	ft_unsigned.c \
	ft_pointer.c \
	ft_str.c \
			
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	ar rcs $(NAME)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	 rm -f $(NAME)

re: fclean all
.PHONY: clean fclean all re