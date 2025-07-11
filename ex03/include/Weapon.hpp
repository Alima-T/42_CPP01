/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:44:27 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/11 01:12:35 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string m_type;
		
	public:
	
		Weapon(const std::string& type);               // constructor
    	const std::string& getType() const;            // getter (returns const ref)
    	void setType(const std::string& newType);      // setter
};

#endif