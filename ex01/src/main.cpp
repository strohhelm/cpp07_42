/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:39:28 by pstrohal          #+#    #+#             */
/*   Updated: 2025/02/03 11:28:10 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/stuff.hpp"



int main (void)
{
	int intarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	size_t intarrlen = sizeof(intarray) / sizeof(int);
	char chararray[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	size_t chararrlen = sizeof(chararray) / sizeof(char);
	std::string stringarray[] = {"Hallo ", "this ", "is ", "a wierd", "test!"};
	size_t stringarrlen = 5;
	float floatarray[] = {68468.256, 38468.2135, 5468796523.21, 68489435.55};
	size_t floatarrlen = sizeof(floatarray) / sizeof(float);
	auto f = [](int &arg) {arg += 5;return ;};
	std::cout<<"\n==========\n"<<std::endl;
	iter(intarray, intarrlen, print<int>);

	std::cout<<"\n==========\n"<<std::endl;
	iter(chararray, chararrlen, print<char>);

	std::cout<<"\n==========\n"<<std::endl;
	iter(stringarray, stringarrlen, print<std::string>);

	std::cout<<"\n==========\n"<<std::endl;
	iter(floatarray, floatarrlen, print<float>);

	std::cout<<"\n==========\n"<<std::endl;
	iter(intarray, intarrlen, f);
	iter(intarray, intarrlen, print<int>);
	
}