/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/14 20:34:03 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class   Bureaucrat {
protected:
    const std::string   Name;
    int                 Grade;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &);
    ~Bureaucrat();
    Bureaucrat  &operator=(Bureaucrat const &);
    Bureaucrat(std::string, int);
    std::string getName() const ;
    void    setGrade(int);
    int     getGrade() const ;
    void    incrementGrade();
    void    decrementGrade();
    class GradeTooHighException : public std::exception{
      const char *what()  const throw() {
        
        return ("Bureaucrat : GradeTooHighException");
      };
    };
    
    class GradeTooLowException : public std::exception{
      const char *what()  const throw() {
        
        return ("Bureaucrat : GradeTooLowException");
      };
    };
    void  signForm(Form &);
};

std::ostream  &operator<<(std::ostream &, Bureaucrat const &);