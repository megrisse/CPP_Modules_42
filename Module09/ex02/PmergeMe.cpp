/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:51 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/29 21:56:09 by megrisse         ###   ########.fr       */
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

void    PmergeMe::parseData(char **av, int size) {

    Size = size;
    for (int i = 1; i <= size; i++) {

        int n = std::atoi(av[i]);
        myList.push_back(n);
    }
    print();
}

void    PmergeMe::print() {

    std::list<int>::iterator    it = myList.begin();

    for (; it != myList.end(); it++)
        std::cout << *it << std::endl;
    std::cout << "Size = " << Size << std::endl;
}