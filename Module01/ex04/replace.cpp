/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:45:10 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/25 18:18:25 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    Replace::replace(std::string &line, std::string s1, std::string s2)
{
    size_t start = line.find(s1);
    while (start != std::string::npos){
        line.erase(start, s1.length());
        line.insert(start, s2);
        start = line.find(s1);
    }
}

void    Replace::exit(){
    std::cout << "FILE COULDN'T BE OPENED !!!" << std::endl;
    std::exit(0);
}