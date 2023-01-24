/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:47 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/21 23:44:29 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "./Weapon.hpp"

class	HumanB{
	private:
		std::string	_name;
		Weapon*		type;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& _type);
		void	attack();
};

#endif