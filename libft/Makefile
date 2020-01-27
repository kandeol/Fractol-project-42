# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kandeol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 19:41:43 by kandeol           #+#    #+#              #
#    Updated: 2018/03/16 15:20:16 by kandeol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./ft_atoi.c ./ft_bzero.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c \
	   ./ft_isprint.c ./ft_memalloc.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c\
	   ./ft_memset.c ./ft_putchar.c ./ft_putchar_fd.c ./ft_putendl.c ./ft_putendl_fd.c\
	   ./ft_putnbr.c ./ft_putnbr_fd.c ./ft_putstr.c ./ft_putstr_fd.c ./ft_strcat.c\
	   ./ft_strchr.c ./ft_strcmp.c ./ft_strcpy.c ./ft_strdup.c ./ft_strlcat.c\
	   ./ft_strlen.c ./ft_strncat.c ./ft_strncmp.c ./ft_strncpy.c ./ft_strnstr.c\
	   ./ft_strrchr.c ./ft_strstr.c ./ft_tolower.c ./ft_toupper.c ./ft_memdel.c ./ft_strnew.c\
		./ft_strdel.c ./ft_strclr.c ./ft_striter.c ./ft_striteri.c ./ft_strmap.c\
		./ft_strmapi.c ./ft_strequ.c ./ft_strnequ.c ./ft_strsub.c ./ft_strjoin.c\
		./ft_strtrim.c ./ft_strsplit.c ./ft_itoa.c ./ft_memccpy.c ./ft_lstnew.c\
		./ft_lstdelone.c ./ft_lstdel.c ./ft_lstadd.c ./ft_lstiter.c ./ft_lstmap.c\
		./ft_lstaddtoend.c ./ft_list_find.c ./ft_count_word.c ./ft_list_foreach_if.c\
		./ft_list_remove_if.c ./ft_list_merge.c ./ft_count_space_trim.c ./ft_strlenchr.c\
		./ft_abs.c ./ft_bdzero_int.c ./get_next_line.c\

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	@gcc -c $< -o $@ $(FLAGS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
