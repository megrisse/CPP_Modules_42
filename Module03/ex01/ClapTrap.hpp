/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:26:49 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/02 16:41:06 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class   ClapTrap {
protected:
	std::string	Name;
	int			HitPoint;
	int			EnergyPoint;
	int			AttackDamage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap &operator=(const ClapTrap&);
	ClapTrap(std::string name);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setName(std::string name);
	void	setHitPoint(int amount);
	void	setEnergyPoint(int amount);
	void	setAttackDamage(int amount);
	std::string	getName() const ;
	int		getHitPoint();
	int		getEnergyPoint();
	int		getAttackDamage();
};
