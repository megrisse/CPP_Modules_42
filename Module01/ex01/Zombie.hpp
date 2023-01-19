/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:44:43 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/19 14:01:48 by megrisse         ###   ########.fr       */
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
	void setName(std::string name);
};

void	randomChump( std::string name );
Zombie*	newZombie(std::string name);
Zombie*	zombieHorde( int N, std::string name);

#endif