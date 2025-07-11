/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:30 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/11 15:20:35 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Zombie* → returns a pointer to a Zombie in memory.
//std::string name → the function takes a parameter: a text value (like "Carl" or "Lucia"), which is the zombie’s name.
Zombie* newZombie(std::string name)
{
	//new Zombie(name) → creates a new Zombie object in heap using the constructor that takes a std::string as its name.
	//The new keyword allocates memory on the heap (dynamic memory), which means the zombie will live even after this function ends, until you delete it.
	Zombie* zomb = new Zombie(name);
	return zomb;
}
