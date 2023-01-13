/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:11 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/13 21:54:23 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class	Contact
{
public:
	int			index;
	std::string number;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string secret;
}contact;

class	PhoneBook
{
public:
	Contact	Contacts[8];
	void	search(){
		int	i = 0;
		
		std::cout << "	index	|	firstname	|	lastname	|	nickname	| number " << std::endl;
		while (i < 8){
			std::cout << "	" <<Contacts[i].index;
			std::cout << "	|	" << Contacts[i].firstname << "	";
			std::cout << "	|	" << Contacts[i].lastname << "	";
			std::cout << "	|	" << Contacts[i].nickname << "	";
			std::cout << "	|	" << Contacts[i].number << std::endl;
			i++;
		}
	};
	void	exit(){
		std::cout << "exit" << std::endl;
	};
			PhoneBook(){
		std::cout << "PhoneBook created" << "\v" << "|";
		for (int i = 0; i < 8; i++)
		{	Contacts[i].firstname = '.';
			Contacts[i].number = '.';
			Contacts[i].index = i;
			Contacts[i].lastname = '.';
			Contacts[i].nickname = '.';
			Contacts[i].secret = '.';}
}
			~PhoneBook(){
		// std::cout << Contacts[0].firstname << std::endl;
		// std::cout << Contacts[0].lastname << std::endl;
		// std::cout << Contacts[0].nickname << std::endl;
		// std::cout << Contacts[0].number << std::endl;
		// std::cout << Contacts[0].index << std::endl;
}
	void	add(Contact* contact, int i);
};

void	PhoneBook::add(Contact* contact, int i){
	
	std::cout << "firstname : ";
	std::cin >> contact[i].firstname;
	std::cout << "lastname : ";
	std::cin >> contact[i].lastname;
	std::cout << "nickname : ";
	std::cin >> contact[i].nickname;
	std::cout << "number : ";
	std::cin >> contact[i].number;
}

#endif