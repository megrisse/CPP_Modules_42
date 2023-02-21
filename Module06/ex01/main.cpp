/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 02:02:21 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/21 04:58:16 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main(void)
{
  Data d;
  d.i = 0;
  uintptr_t raw = Serializer::serialize(&d);
  Data *ptr = Serializer::deserialize(raw);
  std::cout << ptr->i <<std::endl;
  return 0;
}