/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:12:16 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/01 20:14:49 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	FragTrap(std::string name);
	void	highFivesGuys(void);
};