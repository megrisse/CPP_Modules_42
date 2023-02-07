/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:30:42 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/07 22:31:18 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	
	std::cout << "Cat : Default Constructer Called" << std::endl;
	brain = new Brain();
	this->Type = "Cat";
}

Cat::Cat(const Cat &type) {

	brain = new Brain();
	*this = type;
}

Cat::~Cat() {

	delete brain;
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

void	Cat::setBrain(Brain &brain) {

	this->brain = &brain;
}