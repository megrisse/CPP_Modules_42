/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:02:56 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/23 18:26:29 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"

template <typename T>
void    inter(T *array, int size, void  (*f)(T const &)) {
	
	for (int i = 0; i < size; i++) {

		f(array[i]);
	}
	std::cout << std::endl;
};