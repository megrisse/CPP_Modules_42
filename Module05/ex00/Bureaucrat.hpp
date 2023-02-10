/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:48 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/09 23:51:01 by megrisse         ###   ########.fr       */
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
    Bureaucrat  &operator=(const Bureaucrat &);
    Bureaucrat(std::string, int);
    void    setName(std::string);
    std::string getName() const ;
    void    setGrade(int);
    int     getGrade() const ;
    void    incrementGrade();
    void    decrementGrade();
};