/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:38:04 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 17:59:07 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string name);
		~Weapon(void);
		std::string &getType(void);
		void		setType(std::string value);
	private:
		std::string _type;
};

#endif