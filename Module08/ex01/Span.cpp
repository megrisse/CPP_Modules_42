/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:45:07 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 18:01:23 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {
}

Span::~Span()  {
}

Span::Span(const Span &obj) {

	this->my_vector = obj.my_vector;
	this->N = obj.N;
}

Span    &Span::operator=(const Span &obj) {

	if (this != &obj)
		*this = obj;
	return *this;
}

Span::Span(unsigned int n) : N(n) {

}

void    Span::addNumber(int n) {

	 if (my_vector.size() < this->N)
		my_vector.push_back(n);
	else
		throw std::exception();
}

void	Span::addNumber(int n, int oc) {

	for (int i = 0; i < n; i++) {
		
		my_vector.push_back(oc);
	}
}

int Span::shortestSpan() {

	if (my_vector.size() < 2)
		throw std::exception();
	int	min = INT_MAX;
	int	min1;
	for (size_t i = 0; i < my_vector.size(); i++)
		for (size_t x = i + 1; x < my_vector.size(); ++x) {
			min1 = std::abs(my_vector[i] - my_vector[x]);
			if (min < min1)
				min1 = min;
		}
	return (min1);
}

int	Span::longestSpan() {

	if (my_vector.size() < 2)
		throw std::exception();
	std::vector<int>	tmp(my_vector);
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator	it;
	it = tmp.begin();
	int	min = *it;
	it = tmp.end();
	int	max = *(--it);
	return (max - min);
}