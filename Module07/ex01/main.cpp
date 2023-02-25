/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:03:04 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/23 18:43:08 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    print(int const &n) {

	std:: cout << n;
}

void    print(char const &n) {

	std:: cout << n;
}

void    print(double const &n) {

	std:: cout << n;
}

int main() {

	int arr[6] = {1, 2, 3, 4, 5, 6};
	inter(arr, 6, print);
	char str[7] = "123456";
	inter(str, 6, print);
	double s[6] = {1, 2, 3, 4, 5, 6};
	inter(s, 6, print);
	return 0;
}