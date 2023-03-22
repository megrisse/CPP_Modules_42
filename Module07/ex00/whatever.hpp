/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:41:29 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/22 17:02:06 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

template <typename T>
void    swap(T &a, T &b) {
	
	T   swap;
	swap = a;
	a = b;
	b = swap;
}

template <typename T>
T   min(T a, T b) {

	return (a > b) ? b : a;
}

template <typename T>
T   max(T a, T b) {

	return (a > b) ? a : b;
}