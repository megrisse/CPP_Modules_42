/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:09:51 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/15 00:42:20 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : Indicator(false), GradeToSign(0), GradeToExcute(0) {

	std::cout << "AForm : Default Constructed Called" << std::endl;
}

AForm::~AForm() {

	std::cout << "AForm : Default Destructer Called" << std::endl;
}

AForm::AForm(const AForm &obj) : Name(obj.getName()), Indicator(false), GradeToSign(obj.getGradeToSign()), GradeToExcute(obj.getGradeToExcute()) {
	
	std::cout << "AForm : Copy Constructer" << std::endl;
}

AForm::AForm(const std::string &name, const int &gradetosigne, const int &gradetoexecute) : Name(name), Indicator(false), GradeToSign(gradetosigne), GradeToExcute(gradetoexecute) {

	std::cout << "AForm : Constructed Called" << std::endl;
}

const std::string AForm::getName() const {

	return Name;
}

int	AForm::getGradeToExcute() const {

	return GradeToExcute;
}

int	AForm::getGradeToSign() const {

	return GradeToSign;
}

bool	AForm::getIndicator() const {

	return Indicator;
}

bool	AForm::beSigned(Bureaucrat &obj) {

	try
	{
		if (obj.getGrade() >= GradeToSign)
			Indicator = true;
		else if (obj.getGrade() < GradeToSign)
			throw AForm::GradeTooLowException();
		return (Indicator);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (false);
}

AForm	&AForm::operator=(const AForm &src) {

	(void)src;

	return *this;
}

std::ostream	&operator<<(std::ostream &out, AForm const &obj) {

	out << "AForm Name : " << obj.getName() << " His Indicator Status : " << obj.getIndicator() << " His GradeTosigne : " << obj.getGradeToSign() << " And His GradeTooExecut :" << obj.getGradeToExcute() << std::endl;
	return (out);
}