/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:45:11 by anremiki          #+#    #+#             */
/*   Updated: 2022/06/20 18:04:05 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << _type->getType() << std::endl;
}

void	HumanB::setType(Weapon newType)
{
	this->_type = newType;
}
/*************************************************************/
/*                          CONSTRUCTOR                      */
/*************************************************************/
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_type = NULL;
}

/*************************************************************/
/*                         DESTRUCTOR                        */
/*************************************************************/
HumanB::~HumanB()
{
}

