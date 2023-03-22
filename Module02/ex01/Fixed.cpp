/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:41:49 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/27 14:19:50 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()  : FixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->FixedPoint = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return FixedPoint;
}

void    Fixed::setRawBits(int const raw) {
	FixedPoint = raw;
}

Fixed::Fixed(const int &n) {
	std::cout << "Int constructor called" << std::endl;
	FixedPoint = n << FractionalBits;
}

Fixed::Fixed(const float &f) {
	std::cout << "Float constructor called" << std::endl;
	FixedPoint = roundf(f * (1 << FractionalBits));
}

std::ostream & operator <<(std::ostream &out, Fixed const &src) {

	
	out << float(src.toFloat());
	
	return out;
}

float   Fixed::toFloat() const {
	return ((float(FixedPoint) / (1 << FractionalBits)));
}

int Fixed::toInt() const {
	return (FixedPoint >> FractionalBits);
}