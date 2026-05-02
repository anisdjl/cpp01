/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:33:45 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/02 16:15:03 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	public:
		void	complain( std::string level );
		Harl(void);
		~Harl(void);
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif