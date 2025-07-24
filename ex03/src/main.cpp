/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:04:41 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 22:11:59 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <string>

/*
HumanA: Has reference to weapon - always armed, weapon can't be removed or changed to null
HumanB: Has pointer to weapon - may or may not have a weapon, can be created without a weapon
Reference (&): Must always point to something, can't be null, can't change what it points to
Pointer (*): Can be null, can point to different things, needs null-checking
When you run it, Bob (HumanA) always attacks because he always has a weapon, 
while Jim (HumanB) could potentially have no weapon and would print a different message. 
Both can change their weapon types during the program.
Use reference when something must always exist, use pointer when it's optional.
*/

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		HumanB jim("Jim");
		jim.attack();
	}
	return 0;
}
