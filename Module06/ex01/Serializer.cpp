/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:02:34 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/21 04:56:13 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer() {
    
}

Serializer::~Serializer() {

}

Serializer::Serializer(const Serializer &obj) {

    (void)obj;
}

Serializer &Serializer::operator=(const Serializer &obj) {

    (void)obj;
    return *this;
}

uintptr_t   Serializer::serialize(Data *ptr) {

    return reinterpret_cast<uintptr_t>(ptr);
}

Data    *Serializer::deserialize(uintptr_t raw) {

    return reinterpret_cast<Data*>(raw);
}