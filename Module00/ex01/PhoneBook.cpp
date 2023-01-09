/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:08 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/09 23:50:26 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){

    PhoneBook   contact;
    // PhoneBook();
    std::cin >> contact.firstname;
    if (contact.firstname == "add")
        contact.add();
    std::cout << "firstname ==" << contact.firstname << "\n";
    std::cout << "lastname ==" << contact.lastname << "\n";
    std::cout << "nickname ==" << contact.nickname << "\n";
    std::cout << "number ==" << contact.number << "\n";
}