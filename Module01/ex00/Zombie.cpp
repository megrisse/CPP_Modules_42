/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:13:33 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/19 00:19:53 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "CREAT A ZOMBIE Default" << std::endl;
}

Zombie::Zombie(std::string name){
    std::cout << "CREAT A ZOMBIE" << std::endl;
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << this->_name << " : DESTRUCTER CALLED" << std::endl;
}

void    Zombie::announce(){
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}