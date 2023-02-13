/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/13 02:31:34 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


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
        
        return ("GradeTooHighException");
      };
    };
    
    class GradeTooLowException : public std::exception{
      const char *what()  const throw() {
        
        return ("GradeTooLowException");
      };
    };
    
};

std::ostream  &operator<<(std::ostream &, Bureaucrat const &);