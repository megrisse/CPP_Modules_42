/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:11 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/09 23:48:03 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class	PhoneBook
{
public:
	int 		number;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	PhoneBook();
	void add(){
	std::cout << "firstname : ";
	std::cin >> firstname;
	std::cout << "lastname : ";
	std::cin >> lastname;
	std::cout << "nickname : ";
	std::cin >> nickname;
	std::cout << "number : ";
	std::cin >> number;
		
	};
	~PhoneBook();
};

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

// void PhoneBook::add()
// {
// 	PhoneBook contact;
// }

#endif