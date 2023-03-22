/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:29:06 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/07 21:44:49 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
protected:
	std::string	Ideas[100];
public:
	Brain();
	Brain(const Brain &);
	virtual	~Brain();
	Brain	&operator=(const Brain &);
	void	setIdea(std::string, int);
	std::string	getIdea() const ;
};