/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:42:36 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 12:09:41 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Contructor called\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": Destructor called\n";
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
