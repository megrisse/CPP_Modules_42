/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:37:22 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 01:21:42 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

	std::cout << "Intern : Default Constructer " << std::endl;
}

Intern::~Intern() {

	std::cout << "Intern : Default Destructer " << std::endl;
}

Intern::Intern(const Intern &obj) {
	
	(void)obj;
	std::cout << "Intern : Copy Constructer " << std::endl;
}

Intern  Intern::operator=(const Intern &obj) {
	
	(void)obj;
	std::cout << "Intern : Copy Assignment Operator " << std::endl;
	
	return *this;
}

AForm    *Intern::makeForm(std::string const &name, std::string const &target) {

	std::string tab[3]	= {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i = 0;
	for(; i < 3; i++) {
		if (tab[i] == name)
			break ;
	}
	switch (i) {
		case 0 :
			{std::cout << "Intern Creats ShrubberyCreationForm\n"; return new ShrubberyCreationForm(target);}
			break ;
		case 1 :
			{std::cout << "Intern Creates RobotomyRequestForm\n" ; return new RobotomyRequestForm(target);}
			break ;
		case 2 :
			{std::cout << "Intern Creates PresidentialPardonForm\n"; return new PresidentialPardonForm(target);}
			break ;
		case 3 :
			{std::cout << "Form Doesn't Exist" << std::endl; return NULL;}
	}
	return NULL;
}