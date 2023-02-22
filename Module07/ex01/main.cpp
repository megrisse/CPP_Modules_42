/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:03:04 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/22 17:51:53 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    powerOf2(int &n) {

	n *= 2;
}

int main() {

	int arr[6] = {1, 2, 3, 4, 5, 6};
	inter(arr, 6, powerOf2);
	
	for (size_t i = 0; i < 6; i++){

		std::cout << arr[i] << std::endl;
	}
	return 0;
}