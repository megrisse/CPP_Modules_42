# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 20:41:57 by megrisse          #+#    #+#              #
#    Updated: 2023/01/27 20:43:42 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CC = c++

HEADER = Fixed.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Fixed.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all