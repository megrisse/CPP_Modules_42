/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:12:20 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/07 22:52:44 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
protected:
	std::string Type;
public:
	Animal();
	Animal(const Animal &);
	virtual ~Animal();
	Animal &operator=(const Animal &);
	void    setType(std::string);
	std::string getType() const ;
	virtual void    makeSound() const ;
};
