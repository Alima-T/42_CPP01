/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:24 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/11 15:20:21 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie* heapyZombie = new Zombie("Heapy");
	heapyZombie->announce();
	delete heapyZombie;
	randomChump("Stacky");
	Zombie stackZomb =  Zombie();	// Stack: Uses default constructor (no parameters)
    stackZomb.announce();
	
	// Zombie* zombie1 = newZombie("Carl");
	// zombie1->announce();
	// delete zombie1;

	// randomChump("Lucia");

	// Zombie* zombie2 = newZombie("Bob");
	// zombie2->announce();
	// delete zombie2;

	return 0;
}

