/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/20 19:13:54 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string  name){
    this->_name = name;
}

HumanB::~HumanB(){
    std::cout << "destructer was called" << std::endl;
}

void    HumanB::attack(){
    std::cout << this->_name << " attacks with their " << this->type << std::endl;
}