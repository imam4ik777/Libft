# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatakis <imatakis@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 23:04:26 by imatakis          #+#    #+#              #
#    Updated: 2024/01/02 18:30:44 by imatakis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_strlen.c \

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re