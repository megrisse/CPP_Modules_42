/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:37:22 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/16 22:26:28 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

    std::cout << "Intern : Default Constructer " << std::endl;
}

Intern::~Intern() {

    std::cout << "Intern : Default Destructer " << std::endl;
}

Intern::Intern(const Intern &obj) {
    
    (void)obj;
    std::cout << "Intern : Copy Constructer " << std::endl;
}

Intern  Intern::operator=(const Intern &obj) {
    
    (void)obj;
    std::cout << "Intern : Copy Assignment Operator " << std::endl;
    
    return *this;
}

Form    *Intern::makeForm(std::string const &name, std::string const &target) {

    std::cout << "Intern Creates : " <<  name << std::endl;
}