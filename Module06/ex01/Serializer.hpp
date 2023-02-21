/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:02:32 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/21 04:55:30 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

struct Data {
    int i;
};

class   Serializer {
private:
    Serializer();
public:
    ~Serializer();
    Serializer(const Serializer &);
    Serializer &operator =(const Serializer &);
    static uintptr_t   serialize(Data *);
    static Data *deserialize(uintptr_t);
};