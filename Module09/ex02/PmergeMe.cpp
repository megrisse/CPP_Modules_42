/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:51 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/31 01:49:38 by megrisse         ###   ########.fr       */
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

int    PmergeMe::parseData(char **av, int size) {

    int n = 0;
    Size = size;
    for (int i = 1; i <= size; i++) {

        n = std::atoi(av[i]);
        if (n < 0 || *av[i] < '0' || *av[i] > '9')
            return 1;
        myList.push_back(n);
    }
    return 0;
}

void    PmergeMe::insertSort(int left, int right) {
    
    for (int i = left + 1; i <= right; i++) {

        int temp = myList[i];
        int x = i - 1;
        while (x >= left && myList[x] > temp) {

            myList[x + 1] = myList[x];
            x--;
        }
        myList[x + 1] = temp;
    }
}

void    PmergeMe::merge(int left, int right) {

    std::deque<int> temp(right - left + 1);
    int i = left, x = Mid + 1, y = 0;
    while (i <= Mid && x <= right) {

        if (myList[i] <= myList[x]) {
            
            temp[y] = myList[i];
            i++;
        }
        else {
            
            temp[y] = myList[x];
            x++;
        }
        y++;
    }
    while (i <= Mid) {

        temp[y] = myList[i];
        i++;
        y++;
    }
    while (x <= right) {

        temp[y] = myList[x];
        x++;
        y++;
    }
    for (int i = left; i <= right; i++)
        myList[i] = temp[i - left];
}

void    PmergeMe::mergeInsertSort(int left, int right) {

    if (right - left + 1 < 32)
        insertSort(left, right);
    else {
        
        Mid = left + (right - left) / 2;
        mergeInsertSort(left, Mid);
        mergeInsertSort(Mid + 1, right);
        merge(left, right);
    }
}

void    PmergeMe::print() {

    std::vector<int>::iterator    it = myList.begin();

    for (; it != myList.end(); it++)
        std::cout << *it << std::endl;
    std::cout << "Size = " << Size << std::endl;
}