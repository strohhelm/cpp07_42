/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stuff.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:38:56 by pstrohal          #+#    #+#             */
/*   Updated: 2025/01/16 17:13:07 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename Type, typename Function> void iter(Type *arr, size_t arrlen, Function func)
{
	for (size_t i = 0; i < arrlen; i++)
	{
		func(arr[i]);
	}
}

template<typename Type> void print(Type arg1)
{
	std::cout<< DG<< arg1<<X<<std::endl;
}