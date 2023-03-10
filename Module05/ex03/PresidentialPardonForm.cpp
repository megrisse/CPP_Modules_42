/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:24:29 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 18:14:50 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
  
	std::cout << "PresidentialPardonForm : Default Constructed Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	std::cout << "PresidentialPardonForm : Default Destructer Called" << std::endl;
}

void    PresidentialPardonForm::execute(const Bureaucrat &executer) const {

    if (!getIndicator())
    	throw AForm::NotSigned();
    else if (executer.getGrade() > getGradeToExcute())
    	throw AForm::GradeTooLowException();
    else if (executer.getGrade() < 1)
    	throw AForm::GradeTooHighException();
	else 
		std::cout << Target << " Has Been Pardoned By Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm("PresidentialPardonForm", obj.getGradeToSign(), obj.getGradeToExcute()) {
	
	std::cout << "PresidentialPardonForm : Copy Constructer" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), Target(target) {

	std::cout << "PresidentialPardonForm : Constructer Called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {

	(void)src;
	std::cout << "Copy Assignment operator" << std::endl;
	return *this;
}

std::string	PresidentialPardonForm::getTarget() const {

	return this->Target;
}