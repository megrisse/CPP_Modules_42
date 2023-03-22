/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:02:57 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/21 23:43:00 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class	Weapon{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon(void);
		const   std::string&	getType(void);
		void					setType(std::string type);
};

#endif