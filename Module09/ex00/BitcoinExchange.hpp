/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:42:02 by megrisse          #+#    #+#             */
/*   Updated: 2023/03/22 21:05:04 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <ctime>
#include <unistd.h>

class BitcoinExchange
{
private:
	std::map<std::string, std::string> data;
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &);
	BitcoinExchange &operator=(const BitcoinExchange &);
	void    parseData();
	int    	getInput(BitcoinExchange &, std::string);
	int     checkInput(std::string);
	int		getDate(std::string &);
	int		checkDate(std::string, int key);
	std::string	findValue(std::string &);
	std::string	getValue(std::string);
};
