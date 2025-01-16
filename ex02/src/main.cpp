/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:41:48 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/16 17:24:17 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Array.hpp"


int main(void)
{
	unsigned int n = 20;
	Array<int> f(n);
	std::cout<<f.size()<<std::endl;
	for (size_t i = 0; i < f.size(); i++)
	{
		f[i] = i;
		std::cout<<i<<std::endl;
	}
	iter(&f[0], f.size(), print<int>);
}