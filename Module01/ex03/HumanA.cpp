/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:38 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/20 19:06:00 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){
    std::cout << "HumanA was created" << std::endl;   
}

HumanA::HumanA(std::string name){
    this->_name = name;
}

void    HumanA::attack(){
    std::cout << this->_name << " attacks with their " << this->type;
}