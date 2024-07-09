# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 15:57:50 by aporras-          #+#    #+#              #
#    Updated: 2024/07/09 16:47:03 by aporras-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC = clang

CFLAGS = -Wall -Werror -Wextra

SRC = \
	ft_char.c \
	ft_hexam.c \
	ft_hexaM.c \
	ft_integer.c \
	ft_nosigno.c \
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