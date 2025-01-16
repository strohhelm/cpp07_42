/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:41:52 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/16 16:42:27 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOURS
#define COLOURS
#define X	"\033[0m"
#define R	"\033[31m"
#define DR	"\033[38;2;255;0;0m"
#define DG	"\033[38;2;0;240;80m"
#define P	"\033[38;2;255;20;200m"
#define LP	"\033[38;2;200;50;160m"
#define G	"\033[32m"
#define L	"\033[38;2;50;150;50m"
#define D	"\033[38;2;160;255;255m"
#define Y	"\033[33m"
#define	O	"\033[38;2;255;165;0m"
#define B	"\033[34m"
#define M	"\033[35m"
#define C	"\033[36m"
#define W	"\033[37m"
#endif

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <new>
#include <iostream>
#include <cstdlib>
#include "../../ex01/inc/stuff.hpp"
template<typename Type> class Array
{
	public:
		Array();
		Array(unsigned int n);

		Array(const Array<Type>& src);
		~Array(){
			delete _array;
		};
		Array<Type>& operator=(const Array<Type>& src);
		Type& operator[](const size_t index);
		size_t size(void) const;

	private:
		Type *_array;
		size_t _size;
};

#include "../src/Array.tpp"



#endif