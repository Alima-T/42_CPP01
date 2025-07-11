/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 01:04:43 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/11 21:21:54 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type){};

Weapon::Weapon(const std::string& type) : m_type(type){};

const std::string& Weapon::getType()const
{
	return this->m_type;
}

void Weapon::setType(const std::string& newType)
{
	this->m_type= newType;
}