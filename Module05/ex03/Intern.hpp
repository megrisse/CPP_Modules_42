/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:37:26 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/17 23:50:08 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();
    Intern(const Intern &);
    Intern  operator=(const Intern &);
    AForm    *makeForm(std::string const &name, std::string const &target);
};
