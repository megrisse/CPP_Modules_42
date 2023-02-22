/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:41:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/22 16:52:42 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {


    int a = 1;
    int c = 13;
    std::cout << "Before swap A = " << a << std::endl;
    std::cout << "Before swap C = " << c << std::endl;
    swap(a, c);
    std::cout << "After swap A = " << a << std::endl;
    std::cout << "After swap C = " << c << std::endl;
    std::cout << min(a, c) << std::endl;
    std::cout << max(a, c) << std::endl;
}