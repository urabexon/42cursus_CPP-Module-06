/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urabex <urabex@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:36:46 by urabex            #+#    #+#             */
/*   Updated: 2025/03/26 13:43:50 by urabex           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base {
    public:
        virtual ~Base();
};

// Baseを継承した3つの空のクラスA,B,Cを作成する
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
