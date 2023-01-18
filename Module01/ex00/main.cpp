/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:20:11 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/18 21:52:53 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    
    Zombie     zombie1;
    Zombie      zombie2;

    zombie1.newZombie("merouane");
    // zombie1.announce();
    zombie2.randomChump("Foo");
    return (0);
}