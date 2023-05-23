/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:53:41 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/18 12:54:11 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"
#include <cstdint>


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return	reinterpret_cast<Data*>(raw);
}