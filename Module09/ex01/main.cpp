/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:18:57 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/07 22:59:58 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	
	if (ac != 2)
		return (std::cout << "Error: Bad Arguments !" << std::endl, 1);
	std::string       ss(av[1]);
	RPN	rpn;
	try
	{
		if (!rpn.parsencalcul(ss))
			return (std::cout << "ERROR" << std::endl, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}