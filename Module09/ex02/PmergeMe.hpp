/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:12 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/29 21:53:44 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <deque>
#include <list>
#include <algorithm>

class   PmergeMe {
private:
	std::list<int>	myList;
	std::deque<int>	myQue;
	int				Size;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &);
	~PmergeMe();
	PmergeMe &operator=(const PmergeMe &);
	void	parseData(char **, int);
	void	mergeSort(PmergeMe &, int);
	void	insertSort(PmergeMe &, int);
	void	print();
};