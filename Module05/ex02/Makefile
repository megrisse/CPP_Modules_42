# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 17:39:13 by megrisse          #+#    #+#              #
#    Updated: 2023/02/14 22:26:25 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat2

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Form.hpp

SRC = Bureaucrat.cpp AForm.cpp main.cpp ShrubberyCreationForm.cpp

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