/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:16:17 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/01 12:29:51 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string	&stringREF = string;
	
	std::cout << &string << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << string << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
	
	return (0);
}
