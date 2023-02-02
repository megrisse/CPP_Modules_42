/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:18 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 21:00:50 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    
    setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(30);
    std::cout << "DiamondTrap : Default Constructer Called" << std::endl;
}

DiamondTrap::~DiamondTrap() {

    std::cout << "DiamondTrap : Default Destructer Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &name) {
    this->Name = name.Name;
    this->name = name.name;
}

DiamondTrap::DiamondTrap(std::string name) {
    setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(30);
	setName(name + "_clap_name");
    this->name = name;
    std::cout << "DiamondTrap : Constructer Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &name) {

    if (this != &name)
		this->Name = name.getName();
	return *this;
}

// void    DiamondTrap::attack(const std::string& target) {

// 	if (this->EnergyPoint == 0)
// 		return ;
// 	std::cout << "DiamondTrap " << Name << " attacks " << target << " ,causing " << AttackDamage  << " Dammage" << std::endl; 
// }

void    DiamondTrap::whoAmI() {

    std::cout << "DiamondTrap Name : " << this->name << " || ClapTrap Name : " << this->Name << std::endl;
}