/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:24:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/11 18:23:51 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Cat.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &);
	~Dog();
	Dog &operator=(const Dog &);
	void    makeSound() const;
};
