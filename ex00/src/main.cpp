/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:24 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 20:09:42 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Shows two different ways to create zombies:
newZombie() - creates zombie on heap (dynamic memory, lives until you delete it)
randomChump() - creates zombie on stack (automatic memory, dies when function ends)

Use stack for temporary objects
Use heap when you need the object to survive after the function that created it

The code demonstrates that heap objects give you control over lifetime, 
but with that control comes responsibility to clean up properly.
*/

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie* heapyZombie = new Zombie("Heapy");
	heapyZombie->announce();
	delete heapyZombie;
	randomChump("Stacky");
	Zombie stackZomb =  Zombie();
    stackZomb.announce();

	// extra tests
	// Zombie* zombie1 = newZombie("Carl");
	// zombie1->announce();
	// delete zombie1;

	// randomChump("Lucia");
	// Zombie stackZomb2 =  Zombie();
	// stackZomb2.announce();
	
	// Zombie* zombie2 = newZombie("Bob");
	// zombie2->announce();
	// delete zombie2;

	return 0;
}

