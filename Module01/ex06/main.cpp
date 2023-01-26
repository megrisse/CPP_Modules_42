/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:05:25 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/26 20:26:33 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    
    if (ac == 2){
        Harl    Obj;
        Obj.complain(av[1]);
    }
    else
        std::cout << "ERROR ARGUMENTS NUMBER !!" << std::endl;
    return 0;
}