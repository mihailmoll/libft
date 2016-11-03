# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmihail <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/28 14:45:16 by mmihail           #+#    #+#              #
#    Updated: 2016/11/03 14:29:59 by mmihail          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC=ft_abs.c ft_atoi.c ft_bzero.c ft_countwords.c ft_getlines.c ft_ilerp.c \
   ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_iswhitespace.c \
   ft_itoa.c ft_lerp.c ft_lerpi.c ft_lstadd.c ft_lstat.c ft_lstcount.c ft_lstdel.c \
   ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_splitdel.c ft_strcat.c \
   ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_lstrev.c ft_strdup.c \
  ft_putstr_fd.c ft_putstr.c ft_putnbr_fd.c ft_putnbr.c ft_putendl_fd.c ft_putendl.c ft_putchar_fd.c \
  ft_putchar.c ft_min.c ft_memset.c ft_memmove.c ft_memdel.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_memccpy.c \
  ft_memalloc.c ft_max.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
  ft_strmapi.c ft_strmerge.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
  ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): libft.h
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -f *.a

re: fclean $(NAME)

.PHONY: clean
