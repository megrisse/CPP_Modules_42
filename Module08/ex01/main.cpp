/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:45:00 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 18:01:42 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

	try
	{
		/* code */
		Span sp = Span(5);

		// Span much = Span(10000);
		// much.addNumber(10000, 15);
		// std::cout <<  " shortestSpan == "<< much.shortestSpan() << std::endl;
		// std::cout <<  " longestSpan == "<< much.longestSpan() << std::endl;
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout <<  " shortestSpan == "<< sp.shortestSpan() << std::endl;
		std::cout <<  " longestSpan == "<< sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}