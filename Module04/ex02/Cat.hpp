/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:30:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/07 21:43:21 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal, virtual public Brain {
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