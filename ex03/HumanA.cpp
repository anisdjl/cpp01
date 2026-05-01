/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:37:41 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 19:20:19 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weaponA(weapon)
{
	std::cout << "humanA's Constructor called\n";
}

HumanA::~HumanA(void)
{
	std::cout << "humanA's Destructor called\n";	
}

void	HumanA::attack(void)
{
	std::cout << _name << " Attacks with " << _weaponA.getType() << "\n";
}
