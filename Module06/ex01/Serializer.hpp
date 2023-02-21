/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:02:32 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/21 02:33:01 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class   Serializer {
private:
    Serializer();
public:
    ~Serializer();
    Serializer(const Serializer &);
    Serializer &operator =(const Serializer &);
    uintptr_t   serialize(Data *)
    Data *deserialize(uintptr_t);
};