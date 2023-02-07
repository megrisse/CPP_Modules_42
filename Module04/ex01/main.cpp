/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:12:23 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/07 21:25:04 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {

	const	Animal* meta = new Animal();
	const	Animal*	j = new	Dog();
	const	Animal*	i = new Cat();
	const	WrongAnimal* wrong = new WrongCat();
	const	WrongAnimal* wwrong = new WrongAnimal();
	Animal a;
	

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrong->makeSound();
	wwrong->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete wwrong;
	return 0;
}