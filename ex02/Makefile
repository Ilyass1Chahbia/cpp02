# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 10:55:53 by ilchahbi          #+#    #+#              #
#    Updated: 2025/02/08 14:05:59 by ilchahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed_op

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = Fixed.cpp main.cpp

OBJ = $(SOURCES:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.opp: %.cpp Fixed.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)	

fclean: clean
	@rm -rf $(NAME)

re: fclean all
