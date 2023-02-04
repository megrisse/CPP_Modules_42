/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:30:42 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 15:40:30 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	
	std::cout << "Cat : Default Constructer Called" << std::endl;
	this->Type = "Cat";
}

Cat::Cat(const Cat &type) {

	*this = type;
}

Cat::~Cat() {

	std::cout << "Cat : Default Destructer Called" << std::endl;
}

Cat &Cat::operator=(const Cat &type) {

	if (this != &type)
		this->Type = type.Type;
	return *this;
}

void	Cat::makeSound() const {

	std::cout << "Cats meowing" << std::endl;
}