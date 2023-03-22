/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:11 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/23 22:34:09 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <sstream>
#include "Contact.hpp"

class	PhoneBook{
public:
	Contact	Contacts[8];
	int		contactNumbers;
			PhoneBook();
	void	search();
	void	exit();
	void	add(Contact* contact, int i);
};

#endif