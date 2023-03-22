/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:32:56 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/28 01:35:59 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()  : FixedPoint(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->FixedPoint = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return FixedPoint;
}

void    Fixed::setRawBits(int const raw) {
    FixedPoint = raw;
}

Fixed::Fixed(const int &n) {
    // std::cout << "Int constructor called" << std::endl;
    FixedPoint = n << FractionalBits;
}

Fixed::Fixed(const float &f) {
    // std::cout << "Float constructor called" << std::endl;
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

bool Fixed::operator>(const Fixed &n) {
    return (FixedPoint > n.FixedPoint);
}

bool Fixed::operator<(const Fixed &n) {
    return (FixedPoint < n.FixedPoint);
}

bool Fixed::operator>=(const Fixed &n) {
    return (FixedPoint >= n.FixedPoint);
}

bool Fixed::operator<=(const Fixed &n) {
    return (FixedPoint <= n.FixedPoint);
}

bool Fixed::operator==(const Fixed &n) {
    return (FixedPoint == n.FixedPoint);
}

bool Fixed::operator!=(const Fixed &n) {
    return (FixedPoint != n.FixedPoint);
}

float Fixed::operator+(const Fixed &n) {
    return (toFloat() + n.toFloat());
}

float Fixed::operator-(const Fixed &n) {
    return (toFloat() - n.toFloat());
}

float Fixed::operator*(const Fixed &n) {
    return (toFloat() * n.toFloat());
}

float Fixed::operator/(const Fixed &n) {
    return (toFloat() / n.toFloat());
}

Fixed &Fixed::operator++(int) {
    Fixed *tmp = new Fixed(*this);
    FixedPoint++;
    return (*tmp);
}

Fixed &Fixed::operator++() {
    FixedPoint++;
    return (*this);
}

Fixed &Fixed::operator--(int) {
    Fixed *tmp = new Fixed(*this);
    FixedPoint--;
    return (*tmp);
}

Fixed &Fixed::operator--() {
    FixedPoint--;
    return (*this);
}

Fixed   &Fixed::min(Fixed &a, Fixed &b) {
    if (a >= b)
        return (b);
    else
        return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if ((Fixed)a >= (Fixed)b)
        return (b);
    else 
        return (a);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b) {
    if (a >= b)
        return (a);
    else
        return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if ((Fixed)a >= (Fixed)b)
        return (a);
    else 
        return (b);
}
