/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:30 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 20:09:58 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Zombie* → returns a pointer to a Zombie in memory.
//new Zombie(name) → creates a new Zombie object in heap using the constructor that takes a std::string as its name.
//"new" keyword allocates memory on the heap (dynamic memory), zombie will live after function ends, until we delete it.
Zombie* newZombie(std::string name)
{
	Zombie* zomb = new Zombie(name);
	return zomb;
}
