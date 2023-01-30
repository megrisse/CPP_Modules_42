/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/30 21:38:03 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : HitPoint(10), EnergyPoint(10), AttackDamage(0) {

	std::cout << "Constructer Called" << std::endl;
	Name = name;
}

ClapTrap::ClapTrap() : HitPoint(10), EnergyPoint(10), AttackDamage(0) {

	
}

ClapTrap::~ClapTrap() {
	
}

ClapTrap::ClapTrap(const ClapTrap & name) {

	this->Name = name.Name;

	HitPoint = name.HitPoint;
	EnergyPoint = name.EnergyPoint;
	AttackDamage = name.AttackDamage;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& name) {

	if (this != &name)
		this->Name = name.getName();
	return *this;
}

void    ClapTrap::setName(std::string name) {

	Name = name;
}

std::string	ClapTrap::getName() const {

	return this->Name;
}

void    ClapTrap::attack(const std::string& target) {

	if (this->HitPoint == 0)
		return ;
	std::cout << "ClapTrap " << Name << " attacks " << target << " ,causing " << AttackDamage << std::endl; 
}

void    ClapTrap::takeDamage(unsigned int amount) {

	if (this->HitPoint == 0)
		return ;
	std::cout << "ClapTrap " << Name << " takeDamage : " << amount << " hitPoint left : " << HitPoint - amount << std::endl;
	this->HitPoint -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {

	if (this->HitPoint == 0)
		return ;
	std::cout << "ClapTrap " << Name << " Repaired " << amount << " which  EnergyPoints : " << HitPoint + amount << std::endl;
	this->HitPoint += amount;
}