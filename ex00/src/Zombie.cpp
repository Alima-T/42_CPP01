/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:34 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 20:11:45 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

// default constructor, we can use it empty or to visualize give a testname Default 
// Zombie::Zombie(void){};
Zombie::Zombie(void)
{
	this->m_name = "Default";
	std::cout << "Default Zombie object created" << std::endl;
}

// Constructor with a parameter to set the name of the Zombie
// Zombie::Zombie(const std::string& name) : m_name(name) {}; /*- initializer list*/
Zombie::Zombie(const std::string& name)
{
	this->m_name = name;
	std::cout << "Zombie object " << this->m_name << " created" << std::endl;
}
// Destructor
Zombie::~Zombie(void)
{
	std::cout << this->m_name << " is destroyed" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->m_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

