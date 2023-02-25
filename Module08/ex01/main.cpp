/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:45:00 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 17:53:35 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

	try
	{
		/* code */
		Span sp = Span(5);
		Span sppp = Span(5);

		sppp.addNumber(5, 2);
		std::cout << "==================\n";
		std::cout << "sppp ==============="<< sppp.shortestSpan() << std::endl;
		std::cout << "sppp ==============="<< sppp.longestSpan() << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "--------\n";
		Span spp(sp);
		// std::cout << "spp =============" << spp.shortestSpan() << std::endl;
		// std::cout << "spp =============" << spp.longestSpan() << std::endl;
		std::cout <<  " sp ===================="<< sp.shortestSpan() << std::endl;
		std::cout <<  " sp ===================="<< sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}