# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 16:55:01 by ilchahbi          #+#    #+#              #
#    Updated: 2025/02/05 16:57:32 by ilchahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed2

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
