/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:45:16 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/26 21:45:15 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>

class   Replace{
    public:
        std::ifstream   inp;
        std::ofstream   out;
        void            replace(std::string& line, std::string s1, std::string s2);
        void            exit(int key);
};