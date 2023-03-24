/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:19:10 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/24 01:46:58 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "fstream"
#include "sstream"
#include <stack>
#include <string>

class RPN {
private:
	std::stack<int>	data;
public:
	RPN();
	RPN(const RPN &);
	RPN &operator=(const RPN &);
	~RPN();
	bool	parsencalcul(std::string);
};