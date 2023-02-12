/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:00:33 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/11 21:05:22 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

class WrongAnimal {
protected:
	std::string Type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &);
	void    setType(std::string);
	std::string getType() const ;
	void    makeSound() const ;
};

