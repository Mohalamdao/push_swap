# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molamdao <molamdao@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 14:55:51 by molamdao          #+#    #+#              #
#    Updated: 2024/09/07 23:33:01 by molamdao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
HEADER = push_swap.h

SRCS =	ft_atoi.c ft_split.c

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.$(HEADER)

all: $(NAME)

$(NAME): $(OBJS)
	ar -src $(NAME) $(OBJS)

$(OBJS):
	gcc $(CFLAGS) -I $(HEADER) -c ${@:.o=.c} -o $@ 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re