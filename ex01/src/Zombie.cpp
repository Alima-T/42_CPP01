/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:40:52 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 23:14:24 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : m_name("Noname") {}

Zombie::Zombie(const std::string& name)
{
	this->m_name = name;
	std::cout<< "Zombie "<< this->m_name <<" created" << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << this->m_name << " is destroyed" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->m_name << ": BraiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name)
{
	this->m_name = name;
}
