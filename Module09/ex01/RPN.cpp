/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:19:07 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/22 22:23:30 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
    
}

RPN::RPN(const RPN &obj) {

    if (this != &obj)
        *this = obj;
}

RPN &RPN::operator=(const RPN &obj) {

    if (*this != &obj)
        *this = obj;
    return *this;
}

RPN::~RPN() {

    
}