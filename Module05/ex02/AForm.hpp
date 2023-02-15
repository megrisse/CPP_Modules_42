/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:09:55 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/15 02:43:20 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class   AForm {
private:
	const std::string	Name;
	bool				Indicator;
	const int			GradeToSign;
	const int			GradeToExcute;
public:
	AForm();
	~AForm();
	AForm(const AForm &);
	AForm	&operator=(const AForm &);
	AForm(const std::string &, const int &, const int &);
	const std::string getName() const ;
	bool getIndicator() const ;
	int getGradeToSign() const ;
	int getGradeToExcute() const ;
	class GradeTooHighException : public std::exception {
		
		const char *what() const throw() {
			
			return ("AForm : GradeTooHighException");
		};
	};
	
	class GradeTooLowException : public std::exception {
		
		const char *what () const throw() {
			
			return ("AForm : GradeTooLowException");
		};
	};

	class	NotSigned : public std::exception {
		
		const char *what () const throw() {
			
			return ("AForm : NotSignedException");
		};
	};
	
	bool	beSigned(Bureaucrat &);
	virtual	void	execute(Bureaucrat const &executor) const = 0;
};