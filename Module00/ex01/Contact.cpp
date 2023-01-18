/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:43:55 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/18 21:39:24 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setIndex(int i)
{
    this->index = i;
}

void    Contact::setNumber(std::string number)
{
    this->number = number;
}

void    Contact::setFirstname(std::string firstname)
{
    this->firstname = firstname;
}

void    Contact::setLastname(std::string lastname)
{
    this->lastname = lastname;
}

void    Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void    Contact::setSecret(std::string secret)
{
    this->secret = secret;
}

int     Contact::getIndex()
{
    return (this->index);
}

std::string Contact::getNumber()
{
    return (this->number);
}

std::string Contact::getFirstname()
{
    return (this->firstname);
}

std::string Contact::getLastname()
{
    return (this->lastname);
}

std::string Contact::getNickname()
{
    return (this->nickname);
}

std::string Contact::getSecret()
{
    return (this->secret);
}