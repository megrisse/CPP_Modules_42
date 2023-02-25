/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 21:45:00 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 01:49:23 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    // std::vector<int>::iterator it = sp.my_vector.begin();
    // for (; it != sp.my_vector.end() ; it++)
    // {
    //     std::cout << *it << std::endl;
    // }
    
    sp.shortestSpan();
    // std::cout << sp.longestSpan() << std::endl;

    return 0;
}