/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 11:42:41 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 12:08:52 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		void	announce(void);
		void	setName(std::string name);
		Zombie(void);
		~Zombie(void);
	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif