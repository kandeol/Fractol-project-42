# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kandeol <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/30 16:15:00 by kandeol           #+#    #+#              #
#    Updated: 2018/05/17 17:56:07 by kandeol          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRCS =	./srcs/core/main.c\
		./srcs/draw/draw_fractal.c\
		./srcs/draw/draw.c\
		./srcs/draw/draw_julia.c\
		./srcs/draw/draw_burning_ship.c\
		./srcs/translation/trans.c\
	  	./srcs/zoom/zoom.c\
	  	./srcs/color/color.c\
	  	./srcs/color/color2.c\
	  	./srcs/tools/deal_key.c\
	  	./srcs/tools/option.c\

OBJS = $(SRCS:.c=.o)

INCLUDE = -I include

FLAGS = -Wall -Wextra -Werror

LIBMLX = ./minilibx_macos/

LIBFT = ./libft/

LIB = -L./minilibx_macos/ -lmlx\
		-L./libft/ -lft

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBMLX)
	@make -C $(LIBFT)
	gcc -g $(LIB) $^ -o $@ $(INCLUDE) -framework OpenGl -framework AppKit

clean:
	@make clean -C $(LIBFT)
	@rm -f $(OBJS)

fclean: clean
	@make clean -C $(LIBMLX)
	@make fclean -C $(LIBFT)
	rm -f $(NAME)

re: fclean all

%.o: %.c
	@gcc -c $< -o $@ $(FLAGS) $(INCLUDE)

.PHONY: all clean fclean re

#######################

fsanit: $(OBJS)
	@make -C $(LIBMLX)
	@make -C $(LIBFT)
	gcc -g -fsanitize=address $(LIB) $^ -o $@ $(INCLUDE) -framework OpenGl -framework AppKit
