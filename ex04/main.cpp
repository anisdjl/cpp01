/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 21:53:22 by anis              #+#    #+#             */
/*   Updated: 2026/05/02 15:25:58 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Try with this inputs: <filename> <s1> <s2>\n";
		return (1);
	}
	std::string	filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "<s1> is empty, try with a non empty string\n";
		return (1);
	}
	std::string	outfile_name = filename + ".replace";
	std::string line;
	std::ifstream	infile(filename);
	if (!infile.is_open())
	{
		std::cerr << "Error while opening the file: bad permission or no such file\n";
		return (1);
	}
	std::ofstream	outfile(outfile_name);
	while (getline(infile, line))
	{
		algo(line, s1, s2);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}

void	algo(std::string &line, std::string s1, std::string s2)
{
	size_t res = line.find(s1, 0);
	while (res != std::string::npos)
	{
		line.erase(res, s1.length());
		line.insert(res, s2);
		res = line.find(s1, res + s2.length());
	}
}
