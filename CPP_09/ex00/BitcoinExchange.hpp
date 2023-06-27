/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:01:07 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/27 16:47:05 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <fstream>
# include <string>
# include <ctime>
# include <map>
//map container


class BitcoinExchange {
	private:
//Junk Coplien
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange &copy);
	BitcoinExchange &operator=(const BitcoinExchange &right);
	
//Container Attribute	
	std::map<std::string, double> _data;
	
//Private Functions
	bool valiDate(std::string const &date) const;
	bool valiValue(const double &value);
	
//Getter
	double exchangeRateGetter(const std::string &date);
	
	
	public:
//Constructor
	BitcoinExchange(const std::string &file);
	
//Destructor
	~BitcoinExchange();
	
//Public Function	
	void start(const std::string &file);
};

#endif