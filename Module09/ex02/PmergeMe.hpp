/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:01:12 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/24 17:04:19 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <list>

class   PmergeMe {
private:

public:
	PmergeMe();
	PmergeMe(const PmergeMe &);
	~PmergeMe();
	PmergeMe &operator=(const PmergeMe &);
	
};