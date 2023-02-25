/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:45:10 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 01:31:40 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>

class   Span {
private:
	std::vector<int>	my_vector;
	unsigned int		N;
public:
	Span();
	Span(const Span &obj);
	~Span();
	Span	&operator=(const Span &obj);
	Span(unsigned int n);
	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
};