/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:06:51 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/26 21:43:03 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){

    std::string brain = "HI THIS IS BRAIN";
    std::string*    stringPTR = &brain;
    std::string&    stringREF = brain;

    std::cout << "\t\t THE MEMORY ADDRESS" << std::endl;
    std::cout << "The memory address of the string variable : " << &brain << std::endl;
    std::cout << "The memory address held by stringPTR :" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF :" << &stringREF << std::endl;
    std::cout << "\t\t THE VALUES" << std::endl;
    std::cout << "The value of the string variable : " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}