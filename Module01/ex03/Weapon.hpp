/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:57 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/20 19:02:02 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string	_type;

    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon(void);
        std::string const	&getType(void);
        void				setType(std::string type);
};

#endif