/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/14 20:46:52 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Bureaucrat b = Bureaucrat("Bureaucrat", 151);
	Bureaucrat	c = Bureaucrat("wahedAkhor", 0);
	
	b = c;
	Form	f = Form("Form", 1, 0);
	Form	d = Form("GhaHbil", 1, 0);

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