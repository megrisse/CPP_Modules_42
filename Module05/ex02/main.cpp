/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/15 00:50:29 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	Bureaucrat b = Bureaucrat("Bureaucrat", 145);
	Bureaucrat	c = Bureaucrat("wahedAkhor", 145);
	
	b = c;
	ShrubberyCreationForm	f = ShrubberyCreationForm("ShrubberyCreationForm");
	ShrubberyCreationForm	d = ShrubberyCreationForm("GhaHbil");

	f.beSigned(b);
	d.beSigned(c);
	b.signForm(f);
	c.signForm(d);
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