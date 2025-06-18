/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 03:31:38 by aokhapki          #+#    #+#             */
/*   Updated: 2025/06/18 17:07:06 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;

public:
	// Zombie(void);//default constructor
	Zombie(std::string name);//parametried constructor
	~Zombie(void); // desctructor
	void announce(void);//to speak
	// void setName(std::string name);
};

// Function prototypes
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif