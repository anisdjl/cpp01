/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:53:07 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/13 14:10:21 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Try with only one input\n";
		return (1);
	}
	std::string input = argv[1];
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			index;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == input)
		{
			index = i;
			break;
		}
		index = 4;
	}
	
	switch (index)
	{
		case 0:
			std::cout << "[DEBUG]\n";
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n\n";
		case 1:
			std::cout << "[INFO]\n";
			std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
		case 2:
			std::cout << "[WARNING]\n";
			std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month.\n\n";
		case 3:
			std::cout << "[ERROR]\n";
			std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
