/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:24:46 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 15:40:19 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

	std::cout << "Dog : Default Constructer Called" << std::endl;
	Type = "Dog";
}

Dog::Dog(const Dog &type) {

	*this = type;
}

Dog::~Dog() {
	
	std::cout << "Dog : Default Destructer Called" << std::endl;
}

Dog &Dog::operator=(const Dog &type) {

	if (this != &type)
		this->Type = type.Type;
	return (*this);
}

void    Dog::makeSound() const {

	std::cout << "Dogs Bark" << std::endl;
}