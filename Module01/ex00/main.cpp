/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:20:11 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/18 22:32:52 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    
    Zombie     zombie1("stack zombie");

    Zombie * heapZomby = newZombie("HeapZomby");
    heapZomby->announce();
    delete heapZomby;
    zombie1.announce();
    randomChump("Foo");
    // return (0);
}