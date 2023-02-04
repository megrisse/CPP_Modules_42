/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:07:04 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 16:16:11 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	
	std::cout << "WrongCat : Default Constructer Called" << std::endl;
	this->Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &type) {

	*this = type;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat : Default Destructer Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &type) {

	if (this != &type)
		this->Type = type.Type;
	return (*this);
}

void	WrongCat::makeSound() const {

	std::cout << "WrongCats meowing" << std::endl;
}