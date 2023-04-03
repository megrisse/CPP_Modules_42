/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:04:29 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/03 23:26:20 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {


    if (ac < 2)
        return (std::cout << "Bad Arguments Number!" << std::endl, 1);
    else if (ac == 2)
        return 1;
    PmergeMe    obj;
    if (obj.parseData(av, ac - 1))
        return (std::cout << "Bad Arguments !!" << std::endl, 1);
    // std::cout << "TEST" << std::endl;
    obj.Start();
    return 0;
}