/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:12 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/03 23:36:16 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include <ctime>
#include <sys/time.h>

class   PmergeMe {
private:
	std::list<int>			myList;
	std::deque<int>			myQue;
	size_t					Mid;
	size_t					Size;
	time_t					Time;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &);
	~PmergeMe();
	PmergeMe &operator=(const PmergeMe &);
	int		parseData(char **, int);
	void	Start();
	void	print(std::string);

	template <typename Container>
	void	mergeSort(Container &_cont) {

		if (_cont.size() < 2)
			return ;
		this->Mid = _cont.size() / 2;
		Container	Left;
		Container	Right;
		size_t	i = 0;
		typename Container::iterator	it = _cont.begin();
		while (it != _cont.end() && i < _cont.size()) {

			if (i < Mid)
				Left.push_back(*it);
			else
				Right.push_back(*it);
			it++;
			i++;
		}
		this->mergeSort(Left);
		this->mergeSort(Right);
		this->merge(_cont, Left, Right);
	}

	template <typename Container>
	void	merge(Container &_cont, Container &Left, Container &Right) {
		
		size_t	L = 0, R = 0;
		typename Container::iterator	it = _cont.begin(), itL = Left.begin(), itR = Right.begin();
		while (L < Left.size() && R < Right.size()) {

			if (*itL < *itR) {

				*it = *itL;
				it++;
				itL++;
				L++;
			}
			else {
				
				*it = *itR;
				it++;
				itR++;
				R++;
			}
		}
		while (L < Left.size()) {

			*it = *itL;
			it++;
			itL++;
			L++;
		}
		while (R < Right.size()) {

			*it = *itR;
			it++;
			itR++;
			R++;
		}
	}
};