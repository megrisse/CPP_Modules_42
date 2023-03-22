/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:45:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/24 21:33:05 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T &src, int n) {

	typename T::iterator it = std::find(src.begin(), src.end(), n);

	if (it == src.end())
		throw std::exception();
	return std::distance(src.begin(), it);
}
