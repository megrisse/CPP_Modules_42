/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 18:04:37 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat b = Bureaucrat("Bureaucrat", 6);
	Bureaucrat	c = Bureaucrat("wahedAkhor", 4);
	
	b = c;
	
	try
	{
		ShrubberyCreationForm	f = ShrubberyCreationForm("ShrubberyCreationForm");
		ShrubberyCreationForm	d = ShrubberyCreationForm("GhaHbil");

		RobotomyRequestForm	r = RobotomyRequestForm("RobotomyRequestForm");
		RobotomyRequestForm	g = RobotomyRequestForm("GhaHbil");
		
		PresidentialPardonForm	p = PresidentialPardonForm("PresidentialPardonForm");
		PresidentialPardonForm	s = PresidentialPardonForm("GhaHbil");
		
		p.beSigned(b);
		b.executeForm(p);
		// r.beSigned(b);
		// b.executeForm(r);
		// f.beSigned(b);
		// b.executeForm(f);
		// b.signForm(f);
		// f.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << b;
	std::cout << c;
	
}