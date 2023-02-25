/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:38:32 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/25 16:56:13 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class   MutantStack : public std::stack<T, std::deque<T> > {
private:
    //
public:
    typedef typename std::deque<T>::iterator iterator;
    MutantStack() {
        
    };
    ~MutantStack() {
        
    };
    MutantStack(const MutantStack &obj) {

        *this = obj;
    };
    MutantStack operator=(const MutantStack &obj) {

        if (this != &obj)
            *this = obj;
        return *this;
    }
};