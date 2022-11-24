# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arlandia <arlandia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 16:03:36 by arlandia          #+#    #+#              #
#    Updated: 2022/09/28 18:02:17 by arlandia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = *.c
OBJS = $(SRC:%.c=%.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 ar rcs $(NAME) $(OBJS)

%.o: %.c
	 $(CC) -c $(FLAGS) $(SRC)

clean:
	@rm -f $(OBJS)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re