/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:52 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 20:54:51 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap    bob("bob");
    ClapTrap    jim;

    jim = bob;
    jim.setName("jim");
    bob.attack(jim.getName());
    jim.takeDamage(0);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.beRepaired(2);
    bob.attack(jim.getName());
    bob.beRepaired(2);
    bob.attack(jim.getName());
    
}
