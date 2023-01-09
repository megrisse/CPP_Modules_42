# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 18:38:38 by megrisse          #+#    #+#              #
#    Updated: 2023/01/09 21:25:20 by megrisse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRC = Megaphone.cpp 

OBJ = Megaphone.o

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) -std=c++98 $(OBJ) -o $(NAME)
	@echo "Making Megaphone "

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean : 
	@rm -rf *.o
	@echo "remove .o files"

fclean : clean
	@rm -rf $(NAME)
	@echo "remove Megaphone"

re : fclean all