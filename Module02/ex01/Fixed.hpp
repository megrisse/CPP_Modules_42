/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:41:52 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/27 21:36:24 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <cmath>

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
};

std::ostream & operator<<(std::ostream &out, Fixed const &src);
