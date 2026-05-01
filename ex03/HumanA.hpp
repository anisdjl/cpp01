/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:37:36 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 19:28:01 by adjelili         ###   ########.fr       */
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
		HumanA(std::string name, Weapon &weapon); // constructeur dans lequel j'init le name et la refence vers le weapon cree dans le main
		~HumanA(void);
	private:
		std::string	_name;
		Weapon	&_weaponA; // reference (comme ca on l'oblige a avoir une arme des le debut)
};

#endif