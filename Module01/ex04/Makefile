# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 23:41:46 by megrisse          #+#    #+#              #
#    Updated: 2023/01/25 18:00:18 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed

CC = c++

HEADER = replace.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp replace.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
	@touch txt.txt

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
	rm -rf *.replace
	rm -rf *.txt

re : fclean all