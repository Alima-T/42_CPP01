/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:12:41 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/10 14:58:08 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name)
{
	if(N <= 0)
	{
		return nullptr;
	}
	Zombie* horde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		// horde[i].setName(name + std::to_string(i + 1)); to_string С++11
		horde[i].setName(name);
	}
	return horde;
}