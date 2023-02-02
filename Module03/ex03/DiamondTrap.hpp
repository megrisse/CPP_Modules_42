/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:40:16 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 21:01:14 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &);
    DiamondTrap &operator=(const DiamondTrap &);
    DiamondTrap(std::string);
    using   ScavTrap::attack;
    void    whoAmI();
};