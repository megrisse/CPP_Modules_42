/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:05:11 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/04 16:14:34 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &);
    void    makeSound() const ;
};