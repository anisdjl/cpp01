/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:37:20 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 11:33:18 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie *heap_zombie;
	Zombie	stack_zombie("Stack zombie");
	
	heap_zombie = newZombie("Anis");
	randomChump("chumppppp");
	stack_zombie.announce();
	heap_zombie->announce();
	
	delete heap_zombie;
	return (0);
}
