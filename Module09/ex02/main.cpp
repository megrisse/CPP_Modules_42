/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:04:29 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/29 21:49:36 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {


    if (ac < 2)
        return (std::cout << "Bad Arguments !" << std::endl, 1);
    else if (ac == 2)
        return 1;
    PmergeMe    obj;
    obj.parseData(av, ac - 1);
    return 0;
}