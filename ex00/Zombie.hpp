/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:38:16 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 11:40:09 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string);
		~Zombie(void);
	private:
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif