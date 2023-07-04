/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:01:07 by smayrand          #+#    #+#             */
/*   Updated: 2023/07/04 15:14:25 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
	
	BitcoinExchange::BitcoinExchange(const std::string &file) {
		std::ifstream input(file.c_str());
		std::string	  line;
		std::string	  date;
		std::string	  rate_pos;
		double		  rate;
		
		std::getline(input, line);
		while(std::getline(input,line))
		{
			std::string::size_type del_pos = line.find(',');
			if (del_pos == std::string::npos)
			{
				std::cout << "Error: Invalid Format: " << line << std::endl;
				continue;
			}
			date = line.substr(0, del_pos);
			rate_pos = line.substr(del_pos + 1);
			std::stringstream	rate_buf(rate_pos);
			if(!(rate_buf >> rate))
			{
				std::cout << "Error: Invalid Format: " << rate_pos << std::endl;
				continue;
			}
			_data[date] = rate;
		}
	}

	BitcoinExchange::~BitcoinExchange() {

	}

	bool BitcoinExchange::valiDate(std::string const &date) const
	{
		std::tm time = {};
		std::stringstream data(date.c_str());
		data >> std::get_time(&time, "%Y-%m-%d");
		
		if(time.tm_year == -1 || time.tm_mon == -1 || time.tm_mday == -1 || data.fail())
		{
			std::cout << "Error: Invalid Date." << std::endl;
			return (0);
		}
		return (1);
	}
	
	bool BitcoinExchange::valiValue(const double &value)
	{
		if(value > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
			return (0);
		}
		else if(value < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			return (0);
		}
		return (1);
	}

	void BitcoinExchange::start(const std::string &file)
	{
		double			value;
		char 			del;
		std::ifstream	input(file.c_str());
		std::string 	line;
		std::string 	date;
		
		std::getline(input, line);
		while(std::getline(input,line))
		{
			std::stringstream data(line);
			if(!(data >> date >> del>> value))
			{
				std::cout << "Error: Bad Input: " << line << std::endl;
				continue;
			}
			if(!valiDate(date) || !valiValue(value) || del != '|')
				continue;
			double exchangeRate = exchangeRateGetter(date);
			if(exchangeRate == -1.0)
			{
				std::cout << "Error: No Rate Available for date: " << date << std::endl;
				continue;
			}
			std::cout << date << " => " << value << " = " << value * exchangeRate << std::endl;
		}
		
	}
	
	double BitcoinExchange::exchangeRateGetter(const std::string &date)
	{
		std::map<std::string, double>::iterator iterator; 
		iterator = _data.lower_bound(date);
		if(iterator != _data.end())
			return (iterator->second);
		else if(!_data.empty())
			return((--iterator)->second);
		return(-1.0);
	}


//Junk Coplien
	BitcoinExchange::BitcoinExchange() {
		
	}
	BitcoinExchange::BitcoinExchange(BitcoinExchange &copy) {
		*this = copy;
	}
	BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &right) {
		(void)right;
		return(*this);
	}