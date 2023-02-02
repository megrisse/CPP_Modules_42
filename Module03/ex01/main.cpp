/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:52 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 16:56:41 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	
	ScavTrap	scav("Scav");
	ClapTrap	clap("Clap");

	scav.setName("Scav");
	scav.attack(clap.getName());
	// clap.takeDamage(20);
	clap.attack(scav.getName());
	std::cout << "Scav HitPoint : " << scav.getHitPoint() << std::endl;
	std::cout << "scav EnergyPoint : " << scav.getEnergyPoint() << std::endl;
	std::cout << "Scav AttackDamage : " << scav.getAttackDamage() << std::endl;
	// std::cout << "Clap HitPoint : " << clap.getHitPoint() << std::endl;
	// std::cout << "Clap EnergyPoint : " << clap.getEnergyPoint() << std::endl;
	// std::cout << "Clap AttackDamage : " << clap.getAttackDamage() << std::endl;
	scav.guardGate();
	return 0;
}
