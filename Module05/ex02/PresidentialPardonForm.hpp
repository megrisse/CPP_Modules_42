/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:23:19 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/15 21:35:12 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

class   PresidentialPardonForm : public AForm {
private:
	std::string Target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string &);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);
	void    execute(Bureaucrat const &) const ;
};