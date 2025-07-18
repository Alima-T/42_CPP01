/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:52:33 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/18 21:18:57 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" <<std::endl;
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

/*
void (Harl::*functions[4])(void) = // Declare the array and initialise it with "="
void — return type of the functions the pointers point to.
(Harl::*) — pointer to a member function of class Harl.
functions[4] — an array of 4 such pointers.
(void) — the parameter list of the functions, meaning these functions take no arguments.
// Assign function addresses
functions[0] = &Harl::debug;
*/
void Harl::complain(std::string level)
{
	// Declare array of pointers to member functions
	void (Harl::*functions[4])(void);

	// Assign the functions to the array
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;

	// Array of corresponding strings for levels
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	// Search for the right level and call the corresponding function pointer
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();  // Call the function via pointer
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
