/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:41:41 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/25 18:20:01 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av){

    if (ac == 4)
    {
        Replace Obj;
              
        std::string     line, new_file = av[1];
        Obj.inp.open(av[1], std::ios::in);
        Obj.out.open(new_file + ".replace", std::ios::out);
        if (!Obj.inp.is_open() || !Obj.out.is_open())
            Obj.exit();
        else if (Obj.inp.peek() == std::ifstream::traits_type::eof())
            {std::cout << "FILE IS EMPTY !!" << std::endl; return 0;}
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