/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:42:35 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 17:04:40 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	std::cout << "ScavTrap : Default constructer Called" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap : Default Destructer Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {

	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	setName(name);
	std::cout << "ScavTrap : Constructer Called" << std::endl;
}

ScavTrap	&ScavTrap::operator= (const ScavTrap &name) {

	if (this != &name)
		this->Name = name.getName();
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &name) {

	this->Name = name.getName();
}

void    ScavTrap::attack(const std::string& target) {

	if (this->EnergyPoint == 0)
		return ;
	std::cout << "ScavTrap " << Name << " attacks " << target << " ,causing " << AttackDamage  << " Dammage" << std::endl; 
}

void    ScavTrap::guardGate() {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}