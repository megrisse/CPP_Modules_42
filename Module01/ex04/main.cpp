/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:41:41 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/26 00:32:07 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av){

    if (ac == 4)
    {
        Replace Obj;

        std::string     line, new_file = av[1];
        Obj.inp.open(av[1], std::ios::in);
        if (!Obj.inp.is_open())
            Obj.exit(0);
        else if (Obj.inp.peek() == std::ifstream::traits_type::eof())
            {std::cout << "FILE IS EMPTY !!" << std::endl; return 0;}
        Obj.out.open(new_file + ".replace", std::ios::out);
        if (!Obj.out.is_open())
            Obj.exit(1);
        while (std::getline(Obj.inp, line)){
            Obj.replace(line, av[2], av[3]);
            Obj.out << line << std::endl;         
        }
        Obj.inp.close();
        Obj.out.close();
    }
    else
        {std::cout << "ARGUMENTS NUMBER ERROR !!!" << std::endl; return 0;}
}