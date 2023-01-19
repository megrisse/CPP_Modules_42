/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:28:59 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/19 14:02:32 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    
    Zombie* heapZombie = zombieHorde(5, "Foo");
    for (int i = 0; i < 5; i++)
    {
        heapZombie[i].announce();
    }
    
    delete [] heapZombie;
}