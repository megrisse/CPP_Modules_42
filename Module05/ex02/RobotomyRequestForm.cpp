/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:50:21 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/15 22:35:23 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
  
	std::cout << "RobotomyRequestForm : Default Constructed Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	std::cout << "RobotomyRequestForm : Default Destructer Called" << std::endl;
}

void    RobotomyRequestForm::execute(const Bureaucrat &executer) const {

	try
	{
		if (!getIndicator())
			throw AForm::NotSigned();
		else if (executer.getGrade() < getGradeToExcute())
			throw AForm::GradeTooHighException();
		else if (executer.getGrade() < 1)
			throw AForm::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << Target << "Has Been Robotomized Successfflly 50% Of Time." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm("RobotomyRequestForm", obj.getGradeToSign(), obj.getGradeToExcute()) {
	
	std::cout << "RobotomyRequestForm : Copy Constructer" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), Target(target) {

	std::cout << "RobotomyRequestForm : Constructer Called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {

	(void)src;
	std::cout << "Copy Assignment operator" << std::endl;
	return *this;
}