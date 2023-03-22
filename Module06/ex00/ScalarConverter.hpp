/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:42:52 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/21 01:31:54 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <cctype>
#include <iomanip>

class   ScalarConverter {
private:
	ScalarConverter();
public:
	ScalarConverter(const ScalarConverter &);
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &);
	static std::string	getChar(double);
	static std::string	getInt(double);
	static float	getFloat(double);
	static double	getDouble(double);
	static void			convert(std::string &);
};