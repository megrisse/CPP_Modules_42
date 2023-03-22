/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:38:32 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 21:53:22 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class   MutantStack : public std::stack<T, std::deque<T> > {
private:
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	MutantStack() {
		
	};
	~MutantStack() {
		
	};
	MutantStack operator=(const MutantStack &obj) {

		if (this != &obj)
			*this = obj;
		return *this;
	}
	MutantStack(const MutantStack &obj) {

		*this = obj;
	};
	iterator begin() {

		return (this->c.begin());
	};
	iterator end() {

		return this->c.end();
	};
};