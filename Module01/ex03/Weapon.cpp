/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:55 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/20 18:50:55 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->_type = type;
}

Weapon::~Weapon(void) {
}

std::string const	&Weapon::getType(void) {
    return (this->_type);
}

void	Weapon::setType(std::string type) {
    this->_type = type;
}
