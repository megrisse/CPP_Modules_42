/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:19:07 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/04 20:10:50 by megrisse         ###   ########.fr       */
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
		res = second / first;
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

			first = data.top();
			data.pop();
			second = data.top();
			data.push(getCalcul(first, second, *it));
		}
		else if (!isnumber(*it))
			data.push(chartoint(*it));
	}
	std::cout << data.top() << std::endl;
	return (true);
}