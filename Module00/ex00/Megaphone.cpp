/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:03:36 by megrisse          #+#    #+#             */
/*   Updated: 2023/01/16 23:08:45 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){

    char c;
    if (ac > 1){
        int i = 0, j;
        while (av[++i]){
            j = 0;
            while (av[i][j]){
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    c = std::toupper(av[i][j]);
                std::cout << c;
                j++;
            }
        // std::cout << " ";
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
}