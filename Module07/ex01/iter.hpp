/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:02:56 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/22 17:18:18 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"

template <typename T>
void    inter(T *array, uint size, void (*f)(T&)) {
	
	for (size_t i = 0; i < size; i++) {

		f(array[i]);
	}
};