/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:51 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/03 23:46:36 by megrisse         ###   ########.fr       */
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
	this->Size = size;
	for (int i = 1; i <= size; i++) {

		n = std::atoi(av[i]);
		if (n < 0 || *av[i] < '0' || *av[i] > '9')
			return 1;
		myList.push_back(n);
		myQue.push_back(n);
	}
	return 0;
}

void    PmergeMe::print(std::string type) {

	struct  timeval _time;
	gettimeofday(&_time, NULL);
	time_t  Now = _time.tv_sec * 1000000 + _time.tv_usec;
	std::cout << "Time to process a range of " << Size << " elements with std::" << type << " : " << (Now - Time) << " us" << std::endl;
}

void    PmergeMe::Start() {
	
	std::cout << "Before: ";
	for(std::list<int>::iterator    it = this->myList.begin(); it != this->myList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	struct  timeval _time;
	gettimeofday(&_time, NULL);
	this->Time = _time.tv_sec * 1000000 + _time.tv_usec;
	this->mergeSort(this->myList);
	std::cout << "After: ";
	for(std::list<int>::iterator    it = this->myList.begin(); it != this->myList.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	print("list");
	gettimeofday(&_time, NULL);
	this->Time = _time.tv_sec * 1000000 + _time.tv_usec;
	this->mergeSort(this->myQue);
	print("deque");
	
	
}