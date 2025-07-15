/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:46:01 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/15 21:29:04 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

// weapon == NULL	C++98 uses NULL instead of nullptr (C++11+)
HumanB::HumanB(const std::string& name) : m_name(name), m_weapon(NULL){};

void HumanB::setWeapon(Weapon& weapon)
{
	this->m_weapon = &weapon;
}

void HumanB::attack()const
{
	if(m_weapon)
	{
		std::cout << m_name << " attacks with his weapon " << m_weapon->getType() << std::endl; 
	}
	else
	{
		std::cout << m_name << " has no weapon to attack with. " << std::endl;
	}
	
}