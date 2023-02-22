/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:06:32 by megrisse          #+#    #+#             */
/*   Updated: 2023/02/22 15:50:41 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*   generate() {
	
	srand(time(NULL));
	int	random = rand() % 10;
	
	if (!(random % 3))
		return new (A);
	else if (!(random % 2))
		return new (B);
	else
		return new (C);
	return (nullptr);
}

void    identify(Base *p) {  
	
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else   
		std::cout << "This Type Pointed Doesn't A Derived" << std::endl;
}

void    identify(Base &p) {

	try
	{
		A	&obj = dynamic_cast<A &>(p);
		(void)obj;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B	&obj = dynamic_cast<B &>(p);
			(void)obj;
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C	&obj = dynamic_cast<C &>(p);
				(void)obj;
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}	
		}
	}
}

int main() {


    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
}