/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:30:42 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/01 21:35:50 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    
    std::cout << "Cat : Default Constructer Called" << std::endl;
}

Cat::Cat(const Cat &type) {

    *this = type;
}

Cat::~Cat() {
    
    std::cout << "Cat : Default Destructer Called" << std::endl;
}

Cat &Cat::operator=(const Cat &type) {

    if (this != &type)
        this->type = type.type;
    return *this;
}