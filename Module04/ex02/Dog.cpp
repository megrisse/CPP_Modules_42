/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:24:46 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/11 20:53:42 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

	std::cout << "Dog : Default Constructer Called" << std::endl;
	brain = new Brain();
	Type = "Dog";
}

Dog::Dog(const Dog &type) {

	brain = new Brain();
	*this = type;
}

Dog::~Dog() {
	
	delete brain;
	std::cout << "Dog : Default Destructer Called" << std::endl;
}

Dog &Dog::operator=(const Dog &type) {

	brain = new Brain();
	if (this != &type)
		this->Type = type.Type;
	return (*this);
}

void    Dog::makeSound() const {

	std::cout << "Dogs Bark" << std::endl;
}

void	Dog::setBrain(Brain &brain) {

	this->brain = &brain;
}