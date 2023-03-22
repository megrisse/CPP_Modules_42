/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/22 22:14:01 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string  name){
    this->_name = name;
}

void    HumanB::attack(){
    std::cout << this->_name << " attacks with their " << this->type->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& _type){
    this->type = &_type;
}