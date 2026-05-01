/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:42:47 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 12:10:01 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde_of_zombie = new Zombie[N];
	for (int i = 0; i < N ; i++)
		horde_of_zombie[i].setName(name);
	
	return (horde_of_zombie);
}
