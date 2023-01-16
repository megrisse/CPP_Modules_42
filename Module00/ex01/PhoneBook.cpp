/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:08 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/16 02:46:42 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){
    
    PhoneBook   contact;
    
    contact.contactNumbers = 0;
    while (1)
    {
        std::cout << "TYPE AN COMMAND : ADD | SEARCH | EXIT" << std::endl;
        contact.Contacts[contact.contactNumbers].index = contact.contactNumbers;
        std::cout << contact.contactNumbers << std::endl;
        std::string input;
        if (!(std::getline(std::cin, input)))
            return (1);
        if (input == "ADD" && contact.contactNumbers < 8)
            {contact.add(contact.Contacts, contact.contactNumbers); contact.contactNumbers++; continue;}
        else if (input == "ADD" && contact.contactNumbers == 8)
            {contact.FixPhoneBook(contact.Contacts, contact.contactNumbers); contact.add(contact.Contacts, contact.contactNumbers - 1); continue;}
        if (input == "SEARCH")
            {contact.search(); continue;}
        if (input == "EXIT")
            {contact.exit(); break;}
        else
            {std::cout << "Invalid command" << std::endl; continue;}
    }
}