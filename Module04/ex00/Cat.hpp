/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:30:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 15:39:19 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Dog.hpp"

class Cat : virtual public Animal {
public:
    Cat();
    Cat(const Cat &);
    ~Cat();
    Cat &operator=(const Cat &);
    void    makeSound() const ;
};