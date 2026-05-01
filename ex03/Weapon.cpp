/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:38:02 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 19:43:59 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;	
}

Weapon::Weapon(std::string name)
{
	this->_type = name;
	std::cout << "Weapon's constructor called\n";
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon's destructor called\n";
}
