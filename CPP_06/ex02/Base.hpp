/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:32:40 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/19 15:32:59 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base {
	public: 
	Base();
	virtual ~Base();	
};

class A : public Base {
	public:
	A();
	~A();
	Base * generate(void);
};
class B : public Base {
	public:
	B();
	~B();
	Base * generate(void);
};
class C : public Base {
	public:
	C();
	~C();
	Base * generate(void);
};


#endif