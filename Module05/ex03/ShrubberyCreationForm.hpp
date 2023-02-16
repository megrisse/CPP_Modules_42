/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 22:20:50 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/16 21:53:53 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
    std::string Target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &);
    void	execute(Bureaucrat const &) const ;
    std::string	getTarget() const ;
};