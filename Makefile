# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatakis <imatakis@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 23:04:26 by imatakis          #+#    #+#              #
#    Updated: 2024/02/19 23:11:28 by imatakis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_strlen.c \
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_memset.c ft_memcpy.c ft_memcmp.c ft_strncmp.c \
		ft_bzero.c ft_memmove.c ft_strchr.c ft_strrchr.c \
		ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_strnstr.c \
		ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c \
		ft_strjoin.c ft_substr.c ft_strtrim.c ft_itoa.c  ft_split.c \

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c \

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

$(NAME): $(OBJ) 
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJ)
	@if [ -n "BONUS_OBJ" ]; then \
		ar -rcs $(NAME) $(BONUS_OBJ); \
	fi

.PHONY: all clean fclean re bonus
