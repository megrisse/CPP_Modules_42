/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:42:41 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 17:03:35 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class  ScavTrap : public virtual ClapTrap {
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap &operator=(const ScavTrap&);
	ScavTrap(std::string name);
	void	attack(const std::string &);
	void	guardGate();
};
