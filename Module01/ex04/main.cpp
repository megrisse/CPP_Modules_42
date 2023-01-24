/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:41:41 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/24 18:55:40 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    replace(std::string &line, std::string s1, std::string s2)
{
    size_t start = line.find(s1);
    while (start != std::string::npos){
        line.erase(start, s2.length());
        line.insert(start, s2);
        start = line.find(s1);
    }
}


int main(int ac, char **av){

    if (ac == 4)
    {
        std::ifstream   inp;
        std::ofstream   out;
        std::string     line, new_file = av[1];
        inp.open(av[1], std::ios::in);
        out.open(new_file + ".replace", std::ios::out);
        if (inp.is_open())
            return 0;
        while (std::getline(inp, line)){
            replace(line, av[2], av[3]);
            out << line << std::endl;            
        }
        inp.close();
        out.close();
    }
    else
        {std::cout << "ARGUMENTS NUMBER ERROR !!!" << std::endl; return 0;}
}