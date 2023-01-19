/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:44:43 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/19 00:22:47 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
private:
	std::string	_name;
public:
	void	announce();
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

void	randomChump( std::string name );
Zombie*	newZombie(std::string name);
#endif