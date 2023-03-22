/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:32:50 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/27 22:18:37 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <math.h>

class Fixed {
private:
	int					FixedPoint;
	static const int	FractionalBits = 8;
public:
	Fixed();//default constructer
	~Fixed();
	Fixed(const int &n);
	Fixed(const float &f);
	Fixed(const Fixed &fixed);//copy constructer
	Fixed &operator = (const Fixed &fixed);//copy assignment operator overload
	int		getRawBits() const ;
	void	setRawBits(int const raw);
	float   toFloat() const ;
	int     toInt() const ;
		// Comparison operators
	bool operator > (const Fixed &);
	bool operator < (const Fixed &);
	bool operator >= (const Fixed &);
	bool operator <= (const Fixed &);
	bool operator == (const Fixed &);
	bool operator != (const Fixed &);
		// arithmetic operarors
	float operator + (const Fixed &);
	float operator - (const Fixed &);
	float operator * (const Fixed &);
	float operator / (const Fixed &);
		// incremet/decrement operators
	Fixed &operator++ (int);//post increment
	Fixed &operator++ ();//pre increment
	Fixed &operator-- (int);//post decrement
	Fixed &operator-- ();//pre decrement
	static Fixed &min(Fixed &, Fixed &);
	static const Fixed &min(const Fixed &, const Fixed &);
	static Fixed &max(Fixed &, Fixed &);
	static const Fixed &max(const Fixed &, const Fixed &);
};

std::ostream & operator<<(std::ostream &out, Fixed const &src);