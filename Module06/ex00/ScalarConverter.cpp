/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:42:49 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/22 20:56:58 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	
}

ScalarConverter::~ScalarConverter() {
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) {

	(void)obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj) {

	(void)obj;
	return *this;
}

std::string ScalarConverter::getChar(double type) {

	std::string	Nd = std::string("Non displayable");
	std::string	Im = std::string("Impossible");
	std::string	ret = std::string(1, static_cast<char>(type));

	if (static_cast<int>(type) == -2147483648)
		return (Im);
	else if (isprint((ret)[0]))
		return (ret);
	else if (!(isprint((ret)[0])))
		return (Nd);
	else
		return (Im);
}

std::string	ScalarConverter::getInt(double type) {

	std::string	imp = std::string("Impossible");
	if (static_cast<int>(type) == -2147483648)
		return (imp);
	std::string ret = std::string(std::to_string(static_cast<int>(type)));
	return (ret);
}

float	ScalarConverter::getFloat(double type) {
	
	float	f = static_cast<float>(type);
	if (!isinf(type))
		return (f);
	if (type > 0)
		return (INFINITY);
	else
		return (-INFINITY);
}

double ScalarConverter::getDouble(double type) {

	if (!isinf(type))
		return (type);
	if (type > 0)
		return (INFINITY);
	else
		return (-INFINITY);
}

void	ScalarConverter::convert(std::string &src) {

	char		*ar;
	std::string	s;

	const char *str = src.c_str();
	double	d = std::strtod(str, &ar);
	std::cout << "char : " << ScalarConverter::getChar(d) << std::endl;
    std::cout << "int : " << ScalarConverter::getInt(d) << std::endl;
    std::cout << "float : " <<  std::fixed << std::setprecision(1) << ScalarConverter::getFloat(d) << "f" << std::endl;
    std::cout << "double : " <<  std::fixed << std::setprecision(1) << ScalarConverter::getDouble(d) << std::endl;
}