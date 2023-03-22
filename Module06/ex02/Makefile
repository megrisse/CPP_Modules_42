# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 15:26:59 by megrisse          #+#    #+#              #
#    Updated: 2023/02/22 15:31:18 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Base

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Base.hpp

SRC = Base.cpp main.cpp

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