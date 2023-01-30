/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:52 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/30 21:37:02 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap    bob("bob");
    ClapTrap    jim;

    jim = bob;
    jim.setName("jim");
    bob.attack(jim.getName());
    jim.takeDamage(5);
    bob.takeDamage(5);
    jim.beRepaired(15);
    jim.takeDamage(5);
    bob.beRepaired(5);
    bob.takeDamage(5);
    bob.takeDamage(5);
    bob.beRepaired(5);
    jim.beRepaired(15);
}
