/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:41:50 by pstrohal          #+#    #+#             */
/*   Updated: 2025/02/03 13:38:22 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename Type>
Array<Type>::Array()
{
	_array = new(std::nothrow) Type[0];
	_size = 0;
}

template<typename Type>
Array<Type>::~Array()
{
	if (_size > 0)
		delete[] _array;
};

template<typename Type>
Array<Type>::Array(const unsigned int n)
{
	_array = new(std::nothrow) Type[n]();
	if (_array)
		_size = n;
	else
		_size = 0;
}
template<typename Type>
Array<Type>::Array(const Array<Type>& src)
{
	
		_size = src.size();
		_array = new(std::nothrow) Type[_size]();
		if (_array)
		{
			for (size_t i =0; i < _size; i++)
				this->_array[i] = src[i];
		}
		else
			_size = 0;
}

template<typename Type>
Array<Type>& Array<Type>::operator=(const Array<Type>& src)
{
	if (this != &src)
	{
		if (this->_size)
			delete[] _array;
		_size = src.size();
		_array = new(std::nothrow) Type[_size];
		if (_array)
		{
			for (size_t i =0; i < _size; i++)
				this->_array[i] = src[i];
		}
			
		else _size = 0;
	}
	return *this;
}

template<typename Type>
Type& Array<Type>::operator[](const size_t index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds!");
	return _array[index];
}

template<typename Type>
size_t Array<Type>::size(void) const
{
	return _size;
}