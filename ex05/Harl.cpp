/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:33:31 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/02 16:50:30 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::error(void)
{
	std::cout << "his is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	typedef void	(Harl::*ptr)(void);
	ptr functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string	tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!tab[i].compare(level))
		{
			(this->*functions[i])();
			return ;
		}
	}
}
