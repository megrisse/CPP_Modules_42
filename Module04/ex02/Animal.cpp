/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:12:18 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/07 22:33:36 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {

    std::cout << "Animal : Default Constructer Called" << std::endl;
}

Animal::Animal(const Animal &type) {

    *this = type;
}

Animal::~Animal() {
    
    std::cout << "Animal : Default Destructer Called" << std::endl;
}

Animal  &Animal::operator=(const Animal &type) {

    if (this != &type)
        this->Type = type.Type;
    return *this;
}

void    Animal::setType(std::string type) {

    this->Type = type;
}

std::string Animal::getType() const {

    return (this->Type);
}

// void    Animal::makeSound() const {

//     std::cout << "Animals Have Many Sounds" << std::endl;
// }