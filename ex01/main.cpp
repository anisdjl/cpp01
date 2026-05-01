/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:42:18 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 12:13:16 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;
	
	N = 10;
	Zombie *tab_of_zombie = zombieHorde(N, "Zombiiiiiie");
	
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie number " << i << ": ";
		tab_of_zombie[i].announce();
	}
	delete[] tab_of_zombie;
	return (0);
}