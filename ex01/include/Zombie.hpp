/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:41:00 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/10 14:46:04 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once = (#ifndef, #define,#endif) -it's non-standard 
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie 
{
	private:
		std::string m_name;
	public:
		Zombie(void);
		Zombie (const std::string& name);
		~Zombie(void);
	
		void announce(void) const;
		void setName(const std::string& name);
};

#endif
