/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:29:02 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/07 21:39:24 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

	std::cout << "Brain : Default Constructer Called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	
	*this = brain;
}

Brain::~Brain() {

	std::cout << "Brain : Default Destructer Called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain) {
	
	if (this != &brain)
		for (int i = 0; i < 100; i++)
			this->Ideas[i] = brain.Ideas[i];
	return *this;
}

