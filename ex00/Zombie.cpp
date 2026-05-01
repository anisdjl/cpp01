/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:47:29 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 12:05:01 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Contructor called\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ":Destructor called\n";
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ...\n";
}
