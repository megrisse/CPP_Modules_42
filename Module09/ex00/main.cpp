/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:57:42 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/04 20:08:11 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {

	if (ac != 2)
		return  (std::cerr << "Bad Arguments !" << std::endl, 1);
	std::string	file = av[1];
	if (file != "input.csv")
		return (std::cerr << "Invalid File !" << std::endl, 1);
	BitcoinExchange obj;
	std::string line;
	std::ifstream   input(file);
	if (!input.is_open())
		return (std::cerr << "File Not Opened" << std::endl, 1);
	else if (input.peek() == std::ifstream::traits_type::eof() || input.peek() == '\n')
		return (std::cerr << "File Is Empty" << std::endl, 1);
	while (std::getline(input, line))
		obj.getInput(obj, line);
	return 0;
}