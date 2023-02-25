# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 21:45:03 by megrisse          #+#    #+#              #
#    Updated: 2023/02/25 01:25:39 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Span.hpp

SRC = main.cpp Span.cpp

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