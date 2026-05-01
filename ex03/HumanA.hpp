/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:37:36 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 19:20:04 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		void	attack(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
	private:
		std::string	_name;
		Weapon	&_weaponA;
};

#endif