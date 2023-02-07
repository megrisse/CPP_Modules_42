/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:51 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 16:04:05 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

    std::cout << "WrongAnimal : Default Constructer Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &type) {

    *this = type;
}

WrongAnimal::~WrongAnimal() {
    
    std::cout << "WrongAnimal : Default Destructer Called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &type) {

    if (this != &type)
        this->Type = type.Type;
    return *this;
}

void    WrongAnimal::setType(std::string type) {

    this->Type = type;
}

std::string WrongAnimal::getType() const {

    return (this->Type);
}

void    WrongAnimal::makeSound() const {

    std::cout << "WrongAnimals Have Same Sounds" << std::endl;
}