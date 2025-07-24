/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:41:00 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 21:28:06 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once = (#ifndef, #define,#endif) -it's non-standard 
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

/*
Zombie(const std::string& name);

- & reference - to avoid copying objects — we use a reference (an alias - another name for the same memory) 
  to the original string. Changing the value through a reference changes the original!
  It’s faster and more efficient, especially for large objects like std::string.
- const means we promise not to modify the original string inside the constructor.
*/
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
