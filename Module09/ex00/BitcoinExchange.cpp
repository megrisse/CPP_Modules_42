/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megrisse <megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:42:14 by megrisse          #+#    #+#             */
/*   Updated: 2023/04/04 20:07:15 by megrisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

	parseData();
}

BitcoinExchange::~BitcoinExchange() {


}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) {

	if (this != &obj)
		*this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj) {

	if (this != &obj)
		*this = obj;
	return *this;
}

void    BitcoinExchange::parseData() {


	std::ifstream   inp;
	std::string		line;
	
	inp.open("data.csv", std::ios::in);
	if (!inp.is_open())
		std::cerr << "Can't Open Data File" << std::endl;
	else if (inp.peek() == std::ifstream::traits_type::eof())
		std::cerr << "Data File Is Empty" << std::endl;
	int	i = 1;
	while (std::getline(inp, line)) {

		if (i > 1) {
			
			std::string	first = line.substr(0, line.find_first_of(","));
			std::string	second = line.substr(line.find_first_of(",") + 1, line.length() - 1);
			data[first] = second;
		}
		i++;
	}
}

int	BitcoinExchange::checkDate(std::string date, int key) {

	if (key == 0) {

		int value = std::stoi(date);
		if (value < 0 || value > 31)
			return 1;
	}
	else if (key == 1) {

		int value = std::stoi(date);
		if (value < 1 || value > 12)
			return 1;
	}
	else if (key == 2) {

		int	value = std::stoi(date);
		if (value < 2009 || value > 2022)
			return 1;
	}
	return 0;
}

bool isLeapYear(int year){
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                return true;
            }return false;
        }return true;
    }return false;
}

int	checkYMD(int year, int month, int day) {

	int	d = 0;
	if (isLeapYear(year))
		d = 29;
	else
		d = 28;
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
			return 1;
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
			return 1;
	else if (month == 2 && day > d)
		return 1;
	return 0;
}

int	BitcoinExchange::getDate(std::string &date) {

	std::string	year, month, day;

	std::string	last = date.substr(date.find_first_of("-") + 1, date.find_last_of("-") - 1);
	year = date.substr(0, date.find_first_of("-"));
	month = last.substr(0, last.find_first_of("-"));
	day = date.substr(date.find_last_of("-") + 1, date.length());

	if (month.length() == 1)
		month = "0" + month;
	if (day.length() == 1)
		day = "0" + day;
	if (BitcoinExchange::checkDate(year, 2) || BitcoinExchange::checkDate(month, 1) || BitcoinExchange::checkDate(day, 0) || checkYMD(std::stoi(year), std::stoi(month), std::stoi(day)))
		return 1;
	date = year + "-" + month + "-" + day;
	return 0;
}

std::string	BitcoinExchange::findValue(std::string &key) {

	std::tm date = {};
    std::istringstream ss(key);
    ss >> std::get_time(&date, "%Y-%m-%d");
    // Decrement the date by one day
    date.tm_mday--;
    std::mktime(&date);
    // Format the new date as a string
    char buffer[11];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", &date);
    return std::string(buffer);
}

std::string	BitcoinExchange::getValue(std::string key) {

	while (data.find(key) == data.end())
		key = findValue(key);
	return data.find(key)->second;
}

int	BitcoinExchange::getInput(BitcoinExchange &btc, std::string line) {

	static int i = 0;

	if (line == "date | value" && i == 0)
		return (i++, 0);
	std::string	date;
	std::string	value;
	date = line.substr(0, line.find_first_of(" "));
	value = line.substr(line.find_first_of("|") + 1, line.length());

	if (btc.getDate(date))
		return (std::cout << "Error: Bad Input => " << date << std::endl, 1);
	if (std::stof(value) < 0)
		return (std::cerr << "Error: not a positive number." << std::endl, 1);
	else if (std::stof(value) > 1000)
		return (std::cerr << "Error: too large a number." << std::endl, 1);
	float res = std::stof(value) * std::stof(getValue(date));
	std::cout << date << " => " << value << " = " << res << std::endl;
	return 0;
}