/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 02:38:27 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/13 02:55:50 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

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
	getName() const ;
	getIndicator() const ;
	getGradeToSign() const ;
	getGradeToExcute() const ;
	class GradeTooHighException : public std::exception {
		
		const char *what () throw() {
			
			return ("GradeTooHighException");
		};
	}
	
	class GradeTooLowException : public std::exception {
		
		const char *what () throw() {
			
			return ("GradeTooLowException");
		};
	}
};

std::ostream &operator<<(std::ostream &, Form const &);