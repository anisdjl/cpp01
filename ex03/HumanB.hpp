/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:37:48 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/13 13:47:27 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		void	attack();
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB(void);
	private:
		Weapon	*_weaponB;
		std::string	_name;
};

#endif