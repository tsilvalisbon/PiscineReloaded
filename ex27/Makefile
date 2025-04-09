# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomandra <tomandra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 16:03:36 by tomandra          #+#    #+#              #
#    Updated: 2025/04/09 02:17:03 by tomandra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_display_file.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(SRC): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
