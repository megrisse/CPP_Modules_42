/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:45 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/12 23:45:01 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

	std::cout << "Bureaucrat : Default Constructer Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &name) {

	*this = name;
}

Bureaucrat::~Bureaucrat() {
	
	std::cout << "Bureaucrat : Default Destructer Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &name) {

	if (this != &name)
		*this = name;
	return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade) {

	std::cout << "Bureaucrat : Constructer Called" << std::endl;
}

std::string Bureaucrat::getName() const {

	return (this->Name);
}

void	Bureaucrat::setGrade(int grade) {

	this->Grade = grade;
}

int		Bureaucrat::getGrade() const {

	return (this->Grade);
}

void	Bureaucrat::incrementGrade() {

	this->Grade -= 1;
}

void	Bureaucrat::decrementGrade() {

	this->Grade += 1;
}