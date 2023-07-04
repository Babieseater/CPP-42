/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:53:21 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/29 12:07:52 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename SWAP>
SWAP swap(SWAP& arg1, SWAP& arg2) {
	SWAP	tmp;
	
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;

    return (arg1 + arg2);
}
template <typename MIN>
MIN min(MIN arg1, MIN arg2) {
	if (arg1 < arg2)
		return (arg1);
	else if (arg1 > arg2)
		return (arg2);
	else
		return (arg2);
}
template <typename MAX>
MAX max(MAX arg1, MAX arg2) {
	if (arg1 > arg2)
		return (arg1);
	else if (arg1 < arg2)
		return (arg2);
	else
		return (arg2);
}

#endif