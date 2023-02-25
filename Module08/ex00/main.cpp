/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:45:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/24 21:44:13 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

    try
    {
        /* code */
        std::vector<int> my_vector(8);
        for (int i = 0; i < 8; i++)
        {
            /* code */
            my_vector.insert(my_vector.begin() + i, 42);
        }
        std::cout << easyfind(my_vector, 5) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;   
}