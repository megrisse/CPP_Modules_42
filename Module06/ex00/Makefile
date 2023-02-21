# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 21:42:46 by megrisse          #+#    #+#              #
#    Updated: 2023/02/20 19:56:19 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = ScalarConverter.hpp

SRC = ScalarConverter.cpp main.cpp

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