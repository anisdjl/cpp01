/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:38:16 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 10:42:42 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie(void);
		~Zombie(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
	private:
		std::string	name;
};

#endif