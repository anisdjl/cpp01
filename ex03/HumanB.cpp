/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:37:51 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/25 12:02:25 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	_weaponB = NULL;
	std::cout << "HumanB's Constructor called\n";
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB's Destructor called\n";
}

void	HumanB::attack(void)
{
	if (this->_weaponB)
		std::cout << _name << " Attacks with " << this->_weaponB->getType() << "\n";
	else
		std::cout << _name << " has no weapon to attack with\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weaponB = &weapon;
}