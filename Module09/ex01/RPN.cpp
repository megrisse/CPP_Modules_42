/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:19:07 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/07 23:03:06 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
	
}

RPN::RPN(const RPN &obj) {

	if (this != &obj)
		*this = obj;
}

RPN &RPN::operator=(const RPN &obj) {

	if (this != &obj)
		*this = obj;
	return *this;
}

RPN::~RPN() {

	
}

int	isvalid(char c) {

	if ((c >= '0' && c <= '9') || c == '+' || c == '-' || c == '/' || c == '*' || c == ' ')
		return 0;
	return 1;
}

int	isnumber(char c) {

	if (c >= '0' && c <= '9')
		return 0;
	return 1;
}

int	isoperator(char c) {

	if (c == '+' || c == '-' || c == '/' || c == '*')
		return 0;
	return 1;
}

int	getCalcul(int first, int second, char c) {

	int	res = 0;

	if (c == '+')
		res = second + first;
	else if (c == '-')
		res = second - first;
	else if (c == '*')
		res = second * first;
	else if (c == '/')
	{
		if (first != 0)
			res = second / first;
		else
			throw std::runtime_error("Error: can't divise 0. !!");
	}
	return res;
}

float	chartoint(char c) {

	int num;
	num = c;
	return float(num - '0');
}

bool	RPN::parsencalcul(std::string line) {

	int	first;
	int	second;
	if (line.length() < 1)
		return false;
	for (std::string::iterator it = line.begin(); it != line.end(); it++) {

		if (isvalid(*it))
			return false;
		else if (!isoperator(*it)) {
			if (data.size() < 2)
				throw std::runtime_error("Error: found operator and numbers in stack not enough. !");
			first = data.top();
			data.pop();
			second = data.top();
			data.pop();
			data.push(getCalcul(first, second, *it));
		}
		else if (!isnumber(*it))
			data.push(chartoint(*it));
	}
	if (data.size() == 1)
		std::cout << data.top() << std::endl;
	else 
		throw std::runtime_error("Error: finnish calcul and numbers in stack not 1. !!");
	return (true);
}