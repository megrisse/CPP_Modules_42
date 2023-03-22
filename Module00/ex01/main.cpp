/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:43:55 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/20 21:54:42 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){
	
	PhoneBook   contact;
	int			i = 0;

	contact.contactNumbers = 0;
	while (1)
	{
		std::cout << "TYPE AN COMMAND : ADD | SEARCH | EXIT" << std::endl;
		contact.Contacts[contact.contactNumbers].setIndex(contact.contactNumbers);
		std::string input;
		if (!(std::getline(std::cin, input)))
			return (1);
		if (input == "ADD")
			{contact.add(contact.Contacts, (i % 8)); i++; continue;}
		if (input == "SEARCH")
			{contact.search(); continue;}
		if (input == "EXIT")
			{contact.exit(); break;}
		else
			{std::cout << "Invalid command" << std::endl; continue;}
	}
}