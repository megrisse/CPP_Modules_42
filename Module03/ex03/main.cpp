/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:52 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 17:07:12 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	
	ScavTrap	scav("Scav");
	ClapTrap	clap("Clap");
	FragTrap	frag("frag");
	DiamondTrap	diamond("diamond");
	diamond.attack(clap.getName());
	diamond.whoAmI();
	scav.attack(clap.getName());
	clap.takeDamage(20);
	clap.attack(scav.getName());
	frag.attack(scav.getName());
	scav.takeDamage(30);
	scav.guardGate();
	frag.highFivesGuys();
	return 0;
}
