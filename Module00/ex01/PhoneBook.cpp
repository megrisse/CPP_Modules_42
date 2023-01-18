/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:08 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/18 21:48:13 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "PhoneBook created" << std::endl;
}

void    PhoneBook::exit(){
    std::cout << "YOU EXITED" << std::endl;
}

void	PhoneBook::add(Contact* contact, int i){	
	std::string str;

	std::cout << "firstname : ";
	if (!(std::getline(std::cin, str)))
		return ;
	if (str.length() > 10)
		{str = str.substr(0, 9).append("."); contact[i].setFirstname(str);}
	else if (str.length() < 1)
		{std::cout << "YOU SHOULD FILL IT" << std::endl; return ;}
	else
		{str = str.append("            "); str = str.substr(0, 10); contact[i].setFirstname(str);}
	std::cout << "lastname : ";
	if (!(std::getline(std::cin, str)))
		return ;
	if (str.length() > 10)
		{str = str.substr(0, 9).append("."); contact[i].setLastname(str);}
	else if (str.length() < 1)
		{std::cout << "YOU SHOULD FILL IT" << std::endl ; return ;}
	else
		{str = str.append("             "); str = str.substr(0, 10); contact[i].setLastname(str);}
	std::cout << "nickname : ";
	if (!std::getline(std::cin, str))
		return ;
	if (str.length() > 10)
		{str = str.substr(0, 9).append("."); contact[i].setNickname(str);}
	else if (str.length() < 1)
		{std::cout << "YOU SHOULD FILL IT" << std::endl; return ;}
	else
		{str = str.append("             "); str = str.substr(0, 10); contact[i].setNickname(str);}
	std::cout << "number : ";
	if (!std::getline(std::cin, str))
		return ;
	if (str.length() > 10)
		{str = str.substr(0, 9).append("."); contact[i].setNumber(str);}
	else if (str.length() < 1)
		{std::cout << "YOU SHOULD FILL IT" << std::endl; return ;}
	else
		{str = str.append("             ");	str = str.substr(0, 10); contact[i].setNumber(str);}
	std::cout << "Darkest secret : ";
	if (!std::getline(std::cin, str))
		return ;
	if (str.length() > 10)
		{str = str.substr(0, 9).append("."); contact[i].setSecret(str);}
	else if (str.length() < 1)
		{std::cout << "YOU SHOULD FILL IT" << std::endl; return ;}
	else
		{str = str.append("             "); str = str.substr(0, 10); contact[i].setSecret(str);}
	if (contactNumbers < 8)
		contactNumbers++;
}

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
		std::cout << "     " << Contacts[i].getIndex() << "    ";
		std::cout << "| " << Contacts[i].getFirstname();
		std::cout << "| " << Contacts[i].getLastname();
		std::cout << "| " << Contacts[i].getNickname() << std::endl;
		i++;
	}
	std::cout << "type an contact index" << std::endl;
	if (!(std::getline(std::cin, str)))
		return ;
	if (!(str >= "0" && str <= "9"))
		{std::cout << "INDEX SHOULD BE NUMERIC!!" << std::endl; return ;}
	std::istringstream(str) >> i;
	if (i >= contactNumbers)
		std::cout << "no contact with this index" << std::endl;
	else
	{
	std::cout << "firstname : " << Contacts[i].getFirstname() << std::endl;
	std::cout << "lastname : " << Contacts[i].getLastname() << std::endl;
	std::cout << "nickname : " << Contacts[i].getNickname() << std::endl;
	std::cout << "number : " << Contacts[i].getNumber() << std::endl;
	std::cout << "secret : " << Contacts[i].getSecret() << std::endl;}}
};