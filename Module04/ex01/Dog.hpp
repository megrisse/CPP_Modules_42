/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:24:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/10 19:57:57 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal {
private:
	Brain*	brain;
public:
	Dog();
	Dog(const Dog &);
	~Dog();
	Dog &operator=(const Dog &);
	void    makeSound() const;
	void	setBrain(Brain &);
};
