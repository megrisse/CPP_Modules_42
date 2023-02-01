/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:12:13 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/01 18:33:36 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
	std::cout << "FragTrap : Default Constructer Called" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap : Default Detructer Called" << std::endl;
}

FragTrap::FragTrap(std::string name) {

	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	setName(name);
	std::cout << "FragTrap :: Constructer Called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &name) {
	
	if (this != &name)
		this->Name = name.getName();
	return *this;
}

FragTrap::FragTrap(const FragTrap &name) {

	this->Name = name.getName();
}

void	FragTrap::highFivesGuys() {

	std::cout << "FragTrap : High Five Guys" << std::endl;
}