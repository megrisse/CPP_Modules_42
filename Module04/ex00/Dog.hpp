/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:24:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 15:39:06 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Cat.hpp"

class Dog : virtual public Animal {
public:
	Dog();
	Dog(const Dog &);
	~Dog();
	Dog &operator=(const Dog &);
	void    makeSound() const;
};
