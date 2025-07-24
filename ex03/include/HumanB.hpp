/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:35:17 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 22:09:53 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

// weapon == NULL	C++98 uses NULL instead of nullptr (C++11+)
class HumanB
{
	private:
	std::string m_name;
	Weapon* m_weapon; // Can be null, can point to different things, needs null-checking

	public:
	HumanB(const std::string& name);
	void setWeapon(Weapon& weapon);
	void attack() const;
};

#endif