/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:02:21 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/21 05:31:24 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main(void)
{
  Data d;
  d.i = 0;
  d.f = 42.1f;
  d.c = 'a';
  d.str = "type";
  d.d = 42.1f;
  
  uintptr_t raw = Serializer::serialize(&d);
  Data *ptr = Serializer::deserialize(raw);
  std::cout << ptr->i <<std::endl;
  std::cout << ptr->c <<std::endl;
  std::cout << ptr->f <<std::endl;
  std::cout << ptr->str <<std::endl;
  std::cout << ptr->d <<std::endl;
  return 0;
}