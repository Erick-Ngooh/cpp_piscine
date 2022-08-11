/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:57:11 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/11 11:11:42 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main( void )
{
	uintptr_t	raw;
	Data		*ptr;

	ptr = new Data;
	ptr->i = 42;

	raw = serialize(ptr);
	std::cout << raw << std::endl;

	ptr = deserialize(raw);
	std::cout << ptr->i << std::endl;

	delete ptr;
}
