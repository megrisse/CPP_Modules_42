/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:13:33 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/18 20:39:25 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "CREAT A ZOMBIE NAMED" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->_name << " : DESTRUCTER CALLED" << std::endl;
}

void    Zombie::announce(){
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}