/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:12:23 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/11 20:41:54 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {

	// const Animal	*j = new Dog();
	// const Animal	*i = new Cat();
	Animal *tab = new Animal[4];

	for (int i = 0; i < 2; i++)
	{
		tab[i] = Dog();
	}
	for (int i = 2; i < 4; i++)
	{
		tab[i] = Cat();
	}
	std::cout << tab[0].getType() << std::endl;
	std::cout << tab[3].getType() << std::endl;
	delete [] tab;
	// delete j;
	// delete i;
	return 0;
}