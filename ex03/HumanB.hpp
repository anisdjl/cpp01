/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:37:48 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 19:29:37 by adjelili         ###   ########.fr       */
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
		void	setWeapon(Weapon &weapon); // celle la va assigner un pointeur vers le weapon cree dans le main
		HumanB(std::string name);
		~HumanB(void);
	private:
		Weapon	*_weaponB; // un pointeur cette fois si donc pas besoin de le set des le debut (car le b n'as pas automatiquement une arme)
		std::string	_name;
};

#endif