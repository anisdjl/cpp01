/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:53:07 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/23 16:06:15 by adjelili         ###   ########.fr       */
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
	Harl	my_harl = Harl();
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
			my_harl.complain("DEBUG");
			// fall through
		case 1:
			std::cout << "[INFO]\n";
			my_harl.complain("INFO");
			// fall through
		case 2:
			std::cout << "[WARNING]\n";
			my_harl.complain("WARNING");
			// fall through
		case 3:
			std::cout << "[ERROR]\n";
			my_harl.complain("ERROR");
			// fall through
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
