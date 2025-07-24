/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:38 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 20:08:49 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is the interface of the Zombie class:It tells the outside world:
- How to create a Zombie object
- That it has a announce() function

* include header guard guard to prevent a header file from being included 
  multiple times during compilation, which can cause errors like:
  multiple definition of a class or redefinition of structs or functions
* alternative #pragma once = all three: #ifndef, #define,#endif 
  it's non-standard (not officially part of the C++ standard), but supported by modern compilers (GCC, Clang, MSVC).
*/
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
// #include <iostream> //we use it only in Zombie.cpp. Only include what we use in the interface. Heavier includes in .cpp. to prevent circular dependencies
// Allman style or BSD style bracing widely recommended than Egyptian/K&R style {}.
class Zombie 
{
private:
	std::string m_name;

public:
	Zombie(void);
	Zombie(const std::string& name);
	~Zombie(void);
	
	void announce(void) const;
};
/*
We don't declare newZombie() and randomChump() here. 
They're functions that create or use Zombie objects, but they're not methods of the Zombie class.
we declare them in the main.cpp file.
*/
#endif
