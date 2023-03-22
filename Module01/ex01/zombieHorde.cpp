/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:29:03 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/19 14:02:04 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name){

	Zombie* Zombies;
	Zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		Zombies[i].setName(name + " NO: " + std::to_string(i + 1));
	}
	
	return (Zombies);
}

void  Zombie::setName(std::string name) {
	this->_name = name;
}
