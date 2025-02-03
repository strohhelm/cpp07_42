/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:57:25 by pstrohal          #+#    #+#             */
/*   Updated: 2025/02/03 11:16:44 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

template<typename Type> void swap(Type &arg1, Type &arg2)
{
	Type tmp;

	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template<typename Type>
Type min(Type arg1, Type arg2)
{
	return arg1 < arg2 ? arg1 : arg2;
}

template<typename Type>
Type max(Type arg1, Type arg2)
{
	return arg1 > arg2 ? arg1 : arg2;
}
// voud cout(void)
// {
	
// }

int main (void)
{
	int a = 2;
	int b = 3;
	
	std::cout<<M<<"\n\n=========Int===========\n"<<X<<std::endl;
	std::cout << "a = " <<D<< a <<X << ", b = " <<D << b <<X<< std::endl;
	swap( a, b );
	std::cout << "a = " <<D<< a <<X << ", b = " <<D<< b <<X<< std::endl;


	std::cout << "min( a, b ) = " <<D<< ::min( a, b ) <<X<< std::endl;
	std::cout << "max( a, b ) = " <<D<< ::max( a, b ) <<X<< std::endl;

	std::cout<<M<<"\n\n========String============\n"<<X<<std::endl;
	
	std::string c = "chain3";
	std::string d = "chain2";
	std::string d2 = G + d;
	swap(c, d);
	std::cout << "c = " <<D<< c <<X<< ", d = " <<D<< d <<X<< std::endl;
	std::cout << "min( c, d ) = " <<D<< ::min( c, d ) <<X<< std::endl;
	std::cout << "min( d, d2 ) = " <<D<< ::min( d, d2 ) <<X<< std::endl;
	std::cout << "max( c, d ) = " <<D<< ::max( c, d ) <<X<< std::endl;
	std::cout << "max( d, d2 ) = " <<D<< ::max<std::string>( d, d2 ) <<X<< std::endl;

		std::cout<<M<<"\n\n========Float============\n"<<X<<std::endl;
	
	float e = 45.3569f;
	float f = 68.5645f;
	std::cout << "e = " <<D<< e <<X<< ", f = " <<D<< f <<X<< std::endl;
	swap(e, f);
	std::cout << "e = " <<D<< e <<X<< ", f = " <<D<< f <<X<< std::endl;
	std::cout << "min( e, f ) = " <<D<< ::min( e, f ) <<X<< std::endl;
	std::cout << "max( e, f ) = " <<D<< ::max( e, f ) <<X<< std::endl;
	// ::cout();
	return 0;
}