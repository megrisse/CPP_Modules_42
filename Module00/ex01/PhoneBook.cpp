/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:08 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/12 22:05:14 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){
    
    PhoneBook   contact;
    int i = 0;
    while (i < 8)
    {
        contact.Contacts[i].index = i;
        std::string input;
        std::cin >> input;
        if (input == "add")
            {contact.add(contact.Contacts, i); i++; continue;}
        else if (input == "search")
            {contact.search(); continue;}
        else if (input == "exit")
            {contact.exit(); break;}
        // continue ;
    }
}