/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 02:38:27 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/14 02:54:38 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form {
private:
	const std::string	Name;
	bool				Indicator;
	const int			GradeToSign;
	const int			GradeToExcute;
public:
	Form();
	~Form();
	Form(const Form &);
	Form &operator=(const Form &);
	Form(const std::string &, const int &, const int &);
	const std::string getName() const ;
	bool getIndicator() const ;
	int getGradeToSign() const ;
	int getGradeToExcute() const ;
	class GradeTooHighException : public std::exception {
		
		const char *what() const throw() {
			
			return ("Form : GradeTooHighException");
		};
	};
	
	class GradeTooLowException : public std::exception {
		
		const char *what () const throw() {
			
			return ("Form : GradeTooLowException");
		};
	};
	bool	beSigned(Bureaucrat &);
};

std::ostream &operator<<(std::ostream &, Form const &);