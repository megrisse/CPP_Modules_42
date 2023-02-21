/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:25:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 18:08:27 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
  
	std::cout << "ShrubberyCreationForm : Default Constructed Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	std::cout << "ShrubberyCreationForm : Default Destructer Called" << std::endl;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executer) const {

    if (!getIndicator())
    	throw AForm::NotSigned();
    else if (executer.getGrade() > getGradeToExcute())
    	throw AForm::GradeTooLowException();
    else if (executer.getGrade() < 1)
    	throw AForm::GradeTooHighException();
    std::ofstream outFile;
    outFile.open(Target + "_shrubbery");
    if (outFile.is_open())
    {
        outFile << "   *           "  << "   *   " << std::endl;
        outFile << "  ***          "  << "  ***  " << std::endl;
        outFile << " *****         "  << " ***** " << std::endl;
        outFile << "*******        "  << "*******" << std::endl;
        outFile << "   *           "  << "   *   " << std::endl;
        outFile << "   *           "  << "   *   " ;
    }
    else
    {
        std::cout << "Error creating file." << std::endl;
    }
    outFile.close();     
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm("ShrubberyCreationForm", obj.getGradeToSign(), obj.getGradeToExcute()) {
	
	std::cout << "ShrubberyCreationForm : Copy Constructer" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), Target(target) {

	std::cout << "ShrubberyCreationForm : Constructer Called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {

	(void)src;
    std::cout << "Copy Assignment operator" << std::endl;
	return *this;
}

std::string	ShrubberyCreationForm::getTarget() const {

	return this->Target;
}