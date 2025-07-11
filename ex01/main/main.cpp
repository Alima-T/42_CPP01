/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:40:39 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/10 15:32:55 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

//declare a function not included in a headder
Zombie* zombieHorde(int N, const std::string& name);

// Zombie* horde = NULL;  // old way
// Zombie* horde = 0;     // really old way (C-style)
// In C++11 and later, nullptr is a real keyword — type-safe and unambiguous.
// if(horde == nullptr)...instead of if(horde == NULL)
int main(void)
{
	int zombieCount;
	
	zombieCount = 7; //number of zombies
	Zombie* horde = zombieHorde(zombieCount,"Zombie");
	if(horde == NULL)
	{
		std::cout << "Failed to create zombie horde" << std::endl;
		return 1;
	}
	for (int i = 0; i< zombieCount; i++)
	{
		horde[i].announce();
	}
	//[] tells the compiler to call the destructor for each object
	delete[] horde;
	return 0;
}