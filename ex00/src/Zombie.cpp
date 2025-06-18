/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:34 by aokhapki          #+#    #+#             */
/*   Updated: 2025/06/18 17:11:02 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie(void)
{
	std::cout << name << "has been destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << "BraiiiiiiinnnzzzZ..." << std:: endl; 
}