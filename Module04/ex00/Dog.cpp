/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:24:46 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/01 21:35:31 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

    std::cout << "Dog : Default Constructer Called" << std::endl;
}

Dog::Dog(const Dog &type) {

    *this = type;
}

Dog::~Dog() {
    
    std::cout << "Dog : Default Destructer Called" << std::endl;
}

Dog &Dog::operator=(const Dog &type) {

    if (this != &type)
        this->type = type.type;
    return *this;
}