/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:50:13 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/27 20:39:16 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed {
private:
	int					FixedPoint;
	static const int	RawBits;
public:
	Fixed();//default constructer
	~Fixed();
	Fixed(const Fixed &fixed);//copy constructer
	Fixed &operator = (const Fixed &fixed);//copy assignment operator overload
	int		getRawBits() const ;
	void	setRawBits(int const raw);
};
