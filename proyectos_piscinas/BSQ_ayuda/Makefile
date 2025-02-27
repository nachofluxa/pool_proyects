# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 13:37:30 by hcordoba          #+#    #+#              #
#    Updated: 2021/08/26 13:37:32 by hcordoba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = checks.c checks2.c map.c read_write.c square.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra 

all:	$(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(SRCS) -Iprototipes $(FLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean