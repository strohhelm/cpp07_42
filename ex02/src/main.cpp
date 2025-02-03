/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:41:48 by pstrohal          #+#    #+#             */
/*   Updated: 2025/02/03 13:33:49 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Array.hpp"


int main(void)
{
	unsigned int n = 20;
	Array<int> f(n);
	std::cout<<"Array of "<<Y<<"INT"<<X<<" made with "<<DG<<f.size()<<X<<" indeces!"<<std::endl;
	for (size_t i = 0; i < f.size(); i++)
	{
		f[i] = i;
		// std::cout<<"Array ["<<Y<<i<<X<<"] "<<G<<f[i]<<X<<std::endl;
	}
	iter(&f[0], f.size(), print<int>);

	std::cout<<"\n===================\n"<<std::endl;
	std::cout<<"Array of "<<Y<<"FLOAT "<<X<< "copied from INT array!"<<std::endl;

	Array<float> a (n);
	for (size_t i = 0; i < a.size(); i++)
	{
		a[i] = (static_cast<float>(f[i]) + 0.565f);
	}
	iter(&a[0], a.size(), print<float>);
	
	std::cout<<"\n===================\n"<<std::endl;
	std::cout<<"Array of "<<Y<<"DOUBLE "<<X<< "copied from FLOAT array!"<<std::endl;
	Array<double> d (a.size());
	
	for (size_t i = 0; i < d.size(); i++)
	{
		d[i] = static_cast<double>(a[i]) * 40.0;
	}
	iter(&d[0], d.size(), print<double>);
	
	std::cout<<"\n===================\n"<<std::endl;
	std::cout<<"Array of "<<Y<<"DOUBLE "<<X<< "copy assigned Double array!"<<std::endl;
	Array<double> dcpy;
	dcpy = d;
	iter(&dcpy[0], dcpy.size(), print<double>);
	
	std::cout<<"\n===================\n"<<std::endl;
	std::cout<<"Array of "<<Y<<"DOUBLE "<<X<< "copy assigned Double array!"<<std::endl;
	Array<std::string> s(6);
	s[0] = "Hallo this is wierd.";
	s[1] = "I dont kow if i will work!?";
	s[2] = "Wow so nice it woked!!!";
	s[3] = "Well what are we gonna do now?";
	s[4] = "Lets try a thing here:";
	s[5] = "We will see if it throws an exception!";
	try{
		s[6] = "hallelujah this is cursed!!";
		s [-1] = "OMG whaaaat!";
	}
	catch (std::exception &e)
	{
		std::cout<<DR<<"ERROR " << e.what()<<X<<std::endl;
	}
	iter(&s[0], s.size(), print<std::string>);
}