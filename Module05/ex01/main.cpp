/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:39 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 02:32:11 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Bureaucrat b = Bureaucrat("Bureaucrat", 150);
	Bureaucrat	c = Bureaucrat("wahedAkhor", 1);
	
	// b = c;
	Form	f = Form("Form", 1, 1);
	Form	d = Form("GhaHbil", 1, 1);

	try
	{
		
		f.beSigned(b);
		d.beSigned(c);
		b.signForm(f);
		c.signForm(d);
		c.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << b;
	std::cout << c;
	
}