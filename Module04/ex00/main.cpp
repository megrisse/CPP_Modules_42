/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:12:23 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 16:15:41 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

int main() {

	const	Animal* meta = new Animal();
	const	Animal*	j = new	Dog();
	const	Animal*	i = new Cat();
	const	WrongAnimal* wrong = new WrongCat();
	

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrong->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrong;
}