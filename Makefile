# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omlouk <omlouk@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/22 21:08:07 by omlouk            #+#    #+#              #
#    Updated: 2025/11/22 21:21:17 by omlouk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBH = libft.h
CC = gcc
FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memcpy.c ft_memchr.c ft_memcmp.c ft_calloc.c \
ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strlcpy.c \
ft_strnstr.c ft_strrchr.c ft_split.c \
ft_substr.c ft_strtrim.c ft_tolower.c ft_toupper.c
CFLAG = -Wall -Wextra -Werror
OBJ = $(FILES:.c=.o)

all: $(NAME)
$(NAME): $(OBJ) $(LIBFT_H)
	$(CC) $(CFLAG) -c $(FILES) -I ../$(LIBFT_H)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all