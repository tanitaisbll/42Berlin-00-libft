# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgeiger <tgeiger@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 12:07:33 by tgeiger           #+#    #+#              #
#    Updated: 2024/09/12 12:25:35 by tgeiger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =

OBJ = $(SRC:.c = .o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.

all: $(NAME)

%.o: %.c
    $(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all

.PHONY all clean fclean re

