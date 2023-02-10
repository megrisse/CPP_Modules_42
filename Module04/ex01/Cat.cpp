/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:30:42 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/09 01:48:28 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	
	std::cout << "Cat : Default Constructer Called" << std::endl;
	this->Type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &type) {

	brain = new Brain();
	*brain = *(type.brain);
}

Cat::~Cat() {

	delete brain;
	std::cout << "Cat : Default Destructer Called" << std::endl;
}

Cat &Cat::operator=(const Cat &type) {

	brain = new Brain();
	for(int i = 0; i < 100; i++)
		brain->setIdea("milk", i);
	if (this != &type)
		*brain = *(type.brain);
	return *this;
}

void	Cat::makeSound() const {

	std::cout << "Cats meowing" << std::endl;
}

void	Cat::setBrain(Brain &brain) {

	this->brain = &brain;
}
