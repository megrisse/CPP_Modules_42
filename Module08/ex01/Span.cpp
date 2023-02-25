/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:45:07 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 01:54:05 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {
}

Span::~Span()  {
}

Span::Span(const Span &obj) {

	*this = obj;
}

Span    &Span::operator=(const Span &obj) {

	if (this != &obj)
		{this->my_vector = obj.my_vector; this->N = obj.N;}
	return *this;
}

Span::Span(unsigned int n) : N(n) {

}

void    Span::addNumber(int n) {

	if (my_vector.size() == 0)
		my_vector.insert(my_vector.begin(), n);
	else if (my_vector.size() < this->N)
		my_vector.push_back(n);
	else
		throw std::exception();
}

int Span::shortestSpan() {

	std::vector<int> tmp(my_vector);

	// std::cout << my_vector.size() << std::endl;
	// std::cout << N << std::endl;
	std::vector<int>::iterator it = my_vector.begin();
	for (; it != my_vector.end() ; it++)
	{
	    std::cout << *it << std::endl;
	}
	std::sort(tmp.begin(), tmp.end());
	it = tmp.begin();
	for (; it != tmp.end() ; it++)
	{
	    std::cout << *it << std::endl;
	}
	it = tmp.begin();
	
	std::cout << "=======" << *it << std::endl;
	std::cout << "=======" << *(++it) << std::endl;
	std::cout << "=======" << ((*it) - *(++it)) << std::endl;
	std::cout << std::distance(it, ++it) << std::endl;
	// std::vector<int>::iterator  iter = tmp.begin() ;
	// return (std::abs((*iter) - *(++iter)));
	return 0;
}