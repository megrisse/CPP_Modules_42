/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:24:25 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/18 17:03:16 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
// #include "Phonebook.hpp"

class	Contact
{
private:
	int			index;
	std::string number;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string secret;
public:
	void		setIndex(int i);
	void		setNumber(std::string number);
	void		setFirstname(std::string firstname);
	void		setLastname(std::string lastname);
	void		setNickname(std::string nickname);
	void		setSecret(std::string secret);
	int			getIndex();
	std::string	getNumber();
	std::string	getFirstname();
	std::string	getLastname();
	std::string	getNickname();
	std::string	getSecret();
};

#endif