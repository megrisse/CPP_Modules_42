/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:42:43 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/21 00:17:28 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int ac, char **av) {

    if (ac == 2) {
        
        std::string src = av[1];
        ScalarConverter::convert(src);
    }
    else
        std::cout << "ERROR ARGUMENTS\n";
    
}