/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anis <anis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 21:53:22 by anis              #+#    #+#             */
/*   Updated: 2026/05/01 23:12:36 by anis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Try with this inputs: <filename> <s1> <s2>\n";
		return (1);
	}
	std::string	filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream	infile(filename);
	if (!infile.is_open())
	{
		std::cout << "Error while opening the file: bad permission or no such file\n";
		return (1);
	}
	
	
	return (0);
}
