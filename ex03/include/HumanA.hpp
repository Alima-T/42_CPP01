/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 01:32:10 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 22:09:49 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include<string>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string m_name;
	Weapon& weapon; // reference: always has a weapon

	public:
	HumanA(const std::string& name, Weapon& weapon);
	void attack() const;
};

#endif