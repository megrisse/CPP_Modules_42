/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 18:27:57 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	
	Bureaucrat b = Bureaucrat("Bureaucrat", 4);
	try
	{
		ShrubberyCreationForm	f = ShrubberyCreationForm("ShrubberyCreationForm");
		ShrubberyCreationForm	d = ShrubberyCreationForm("GhaHbil");

		RobotomyRequestForm	r = RobotomyRequestForm("RobotomyRequestForm");
		RobotomyRequestForm	g = RobotomyRequestForm("GhaHbil");
		
		PresidentialPardonForm	p = PresidentialPardonForm("PresidentialPardonForm");
		PresidentialPardonForm	s = PresidentialPardonForm("GhaHbil");
		
		Intern	I;
		AForm *rrf;
		rrf = I.makeForm("presidential pardon", "Bender");
		rrf->beSigned(b);
		b.executeForm(*rrf);
		// p.beSigned(b);
		// b.executeForm(p);
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
	
}