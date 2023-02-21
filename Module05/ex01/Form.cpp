/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 02:56:01 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/18 17:55:45 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : Indicator(false), GradeToSign(0), GradeToExcute(0) {

	std::cout << "Form : Default Constructed Called" << std::endl;
}

Form::~Form() {

	std::cout << "Form : Default Destructer Called" << std::endl;
}

Form::Form(const Form &obj) : Name(obj.getName()), Indicator(false), GradeToSign(obj.getGradeToSign()), GradeToExcute(obj.getGradeToExcute()) {
	
	std::cout << "Form : Copy Constructer" << std::endl;
}

Form::Form(const std::string &name, const int &gradetosigne, const int &gradetoexecute) : Name(name), Indicator(false), GradeToSign(gradetosigne), GradeToExcute(gradetoexecute) {

	std::cout << "Form : Constructed Called" << std::endl;
}

const std::string Form::getName() const {

	return Name;
}

int	Form::getGradeToExcute() const {

	return GradeToExcute;
}

int	Form::getGradeToSign() const {

	return GradeToSign;
}

bool	Form::getIndicator() const {

	return Indicator;
}

bool	Form::beSigned(Bureaucrat &obj) {
	
	if (obj.getGrade() <= GradeToSign)
		this->Indicator = true;
	else (obj.getGrade() > GradeToSign)
		throw Form::GradeTooLowException();
	return (Indicator);
}

Form	&Form::operator=(const Form &src) {

	(void)src;

	return *this;
}

std::ostream	&operator<<(std::ostream &out, Form const &obj) {

	out << "Form Name : " << obj.getName() << " His Indicator Status : " << obj.getIndicator() << " His GradeTosigne : " << obj.getGradeToSign() << " And His GradeTooExecut :" << obj.getGradeToExcute() << std::endl;
	return (out);
}