# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 16:03:36 by tomandra          #+#    #+#              #
#    Updated: 2025/04/08 20:18:23 by tomandra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS_FILES = $(addprefix srcs/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
INCLUDE = includes

OBJS = $(SRCS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: srcs/%.c
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $(SRCS_FILES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
