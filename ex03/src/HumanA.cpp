/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 01:46:09 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 22:19:44 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

/*  A reference in HumanA must be initialized in the member initializer list.
	Always use member initializer list (: name(name), weapon(weapon)) — especially when your class:
	Has references, Has const members, Needs better performance
	Weapon& weapon is a reference to an external object.
	No dynamic memory (new) is used, std::string m_name cleans itself up (RAII).
	No memory leaks possible here.
*/
HumanA::HumanA(const std::string& name, Weapon& weapon)
	: m_name(name), weapon(weapon){}
	
void HumanA::attack()const
{
	std::cout << m_name << " attacks with their " << weapon.getType() <<std::endl;
}
