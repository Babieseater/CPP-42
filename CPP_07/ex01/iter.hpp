/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:16:06 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/23 14:31:31 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename ITER>
void iter(ITER *tab, int size, void (*f)(ITER &val)) {
	for(int i = 0; i < size; i++)
	{
		(*f)(tab[i]);
	}
}

#endif