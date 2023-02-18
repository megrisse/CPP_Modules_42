/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 00:45:36 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	Bureaucrat b = Bureaucrat("Bureaucrat", 6);
	Bureaucrat	c = Bureaucrat("wahedAkhor", 6);
	
	b = c;
	ShrubberyCreationForm	f = ShrubberyCreationForm("ShrubberyCreationForm");
	ShrubberyCreationForm	d = ShrubberyCreationForm("GhaHbil");

	RobotomyRequestForm	r = RobotomyRequestForm("RobotomyRequestForm");
	RobotomyRequestForm	g = RobotomyRequestForm("GhaHbil");
	
	PresidentialPardonForm	p = PresidentialPardonForm("PresidentialPardonForm");
	PresidentialPardonForm	s = PresidentialPardonForm("GhaHbil");
	
	b.executeForm(f);
	f.beSigned(b);
	d.beSigned(c);
	r.beSigned(b);
	g.beSigned(c);
	p.beSigned(b);
	s.beSigned(c);
	b.signForm(f);
	c.signForm(d);
	b.signForm(r);
	c.signForm(g);
	b.signForm(p);
	c.signForm(s);
	f.execute(b);
	r.execute(b);
	p.execute(b);
	
	try
	{
		c.decrementGrade();
		if (b.getGrade() < 1 || c.getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		if (b.getGrade() > 150 || c.getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << b;
	std::cout << c;
	
}