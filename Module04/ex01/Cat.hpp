/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:30:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/09 01:03:53 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {
private:
    Brain*  brain;
public:
    Cat();
    Cat(const Cat &);
    ~Cat();
    Cat &operator=(const Cat &);
    void    makeSound() const ;
    void    setBrain(Brain &);
};