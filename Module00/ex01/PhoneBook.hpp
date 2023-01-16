/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:11 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/16 02:48:34 by megrisse         ###   ########.fr       */
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
	int			contactNumbers;
	void	search();
	void	exit(){
		std::cout << "exit" << std::endl;
	};
			PhoneBook(){
		std::cout << "PhoneBook created" << std::endl;
		//std::cout << "TYPE AN COMMAND" << std::endl;
};
	void	add(Contact* contact, int i);
	void	FixPhoneBook(Contact* contact, int i);
};

void	PhoneBook::add(Contact* contact, int i){
	
	std::cout << "firstname : ";
	if (!(std::getline(std::cin, contact[i].firstname)))
		return ;
	if (contact[i].firstname.length() > 10)
		contact[i].firstname = contact[i].firstname.substr(0, 9).append(".");
	else
		{contact[i].firstname = contact[i].firstname.append("         "); contact[i].firstname = contact[i].firstname.substr(0, 10);}
	std::cout << "lastname : ";
	if (!(std::getline(std::cin, contact[i].lastname)))
		return ;
	if (contact[i].lastname.length() > 10)
		contact[i].lastname = contact[i].lastname.substr(0, 9).append(".");
	else
		{contact[i].lastname = contact[i].lastname.append("         "); contact[i].lastname = contact[i].lastname.substr(0, 10);}
	std::cout << "nickname : ";
	if (!std::getline(std::cin, contact[i].nickname))
		return ;
	if (contact[i].nickname.length() > 10)
		contact[i].nickname = contact[i].nickname.substr(0, 9).append(".");
	else
		{contact[i].nickname = contact[i].nickname.append("         "); contact[i].nickname = contact[i].nickname.substr(0, 10);}
	std::cout << "number : ";
	if (!std::getline(std::cin, contact[i].number))
		return ;
	if (contact[i].number.length() > 10)
		contact[i].number = contact[i].number.substr(0, 9).append(".");
	else
		{contact[i].number = contact[i].number.append("         ");	contact[i].number = contact[i].number.substr(0, 10);}
	std::cout << "Darkest secret : ";
	if (!std::getline(std::cin, contact[i].secret))
		return ;
	if (contact[i].secret.length() > 10)
		contact[i].secret = contact[i].secret.substr(0, 9).append(".");
	else
		{contact[i].secret = contact[i].secret.append("         "); contact[i].secret = contact[i].secret.substr(0, 10);}
}

void	PhoneBook::FixPhoneBook(Contact* contact, int contactNumbers){
	int i = 0;
	while (i < contactNumbers - 1){
		contact[i] = contact[i + 1];
		Contacts[i].index = i;
		i++;
	}
};

void	PhoneBook::search(){
	int	i = 0;
	std::string str;

	if (contactNumbers == 0)
		std::cout << "no contact saved yet : type ADD to create one" << std::endl;
	else
	{
	std::cout << "   index  | firstname | lastname  | nickname " << std::endl;	
	while (i < contactNumbers){
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "     " << Contacts[i].index << "    ";
		std::cout << "| " << Contacts[i].firstname;
		std::cout << "| " << Contacts[i].lastname;
		std::cout << "| " << Contacts[i].nickname << std::endl;
		i++;
	}
	std::cout << "type an contact index" << std::endl;
	std::getline(std::cin, str);
	i = std::stoi(str);
	if (i >= contactNumbers)
		std::cout << "no contact with this index" << std::endl;
	else
	{
	std::cout << "firstname : " << Contacts[i].firstname << "| ";
	std::cout << "lastname : " << Contacts[i].lastname << "| ";
	std::cout << "nickname : " << Contacts[i].nickname << "| ";
	std::cout << "number : " << Contacts[i].number << "| ";
	std::cout << "secret : " << Contacts[i].secret << std::endl;}}
};


#endif