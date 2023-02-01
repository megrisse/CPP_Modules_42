/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:52 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/01 18:35:22 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	
	ScavTrap	scav("Scav");
	ClapTrap	clap("Clap");
	FragTrap	frag("frag");

	scav.attack(clap.getName());
	clap.takeDamage(20);
	clap.attack(scav.getName());
	frag.attack(scav.getName());
	scav.takeDamage(30);
	scav.guardGate();
	frag.highFivesGuys();
	return 0;
}
