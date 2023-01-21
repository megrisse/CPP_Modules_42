/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:38 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/21 21:30:08 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &_type){
    this->_name = name;
    this->type = &_type;
}

void    HumanA::attack(){
    std::cout << this->_name << " attacks with their " << this->type->getType() << std::endl;
}