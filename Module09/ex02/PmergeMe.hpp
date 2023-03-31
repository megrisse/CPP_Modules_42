/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:12 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/31 01:32:15 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

class   PmergeMe {
private:
	std::vector<int>	myList;
	int				Size;
	int				Mid;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &);
	~PmergeMe();
	PmergeMe &operator=(const PmergeMe &);
	int		parseData(char **, int);
	void	merge(int, int);
	void	insertSort(int, int);
	void	mergeInsertSort(int, int);
	void	print();
};