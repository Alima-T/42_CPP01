/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:52:33 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 23:00:34 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." <<  std::endl;
}

void Harl::error()
{
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functions[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	// Array of corresponding strings for levels
	static const std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	// Search for the right level and call the corresponding function pointer
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();  // Call the function via pointer
			return;
		}
	}
	std::cout << "Unknown complaint level" << std::endl;
}
