/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:18:27 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/22 22:55:38 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

template <typename T>

class	Array {
private:
	T*	array;
	int	len;
public:
	Array() {
		len = 0;
		array = NULL;
	};
	~Array() {

		if (len)
			delete [] array;
	};
	Array(const Array &obj) {
		
		len = 0;
		*this = obj;
	};
	Array	&operator=(const Array &obj) {

		if (len)
			delete [] array;
		len = obj.len;
		array = new T[len]();
		for (int i = 0; i < len; i++)
			array[i] = obj.array[i];
		return *this;
	};
	Array(unsigned int n) {

		len = n;
		array = new T[n];
		if (!array)
			exit(1);
	};
	T	&operator [](int n) {
		
		if 	(n < 0 || n >= len)
			throw (std::exception());
		return array[n];
	};
	int size() const {
		
		return len;
	};
};