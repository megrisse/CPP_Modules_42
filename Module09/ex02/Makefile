# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 17:01:47 by megrisse          #+#    #+#              #
#    Updated: 2023/03/24 17:02:34 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CC = c++

HEADER = PmergeMe.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PmergeMe.cpp

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