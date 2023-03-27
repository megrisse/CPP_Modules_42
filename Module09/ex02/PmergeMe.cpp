/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:51 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/27 01:31:29 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {

    
}

PmergeMe::PmergeMe(const PmergeMe &obj) {

    if (this != &obj)
        this->myList = obj.myList;
}

PmergeMe::~PmergeMe() {

    
}

PmergeMe    &PmergeMe::operator=(const PmergeMe &obj) {
    
    if (this != &obj)
        this->myList = obj.myList;
    return *this;
}