/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:12:41 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 23:13:53 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name)
{
	if(N <= 0)
	{
		return nullptr;
	}
	Zombie* horde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return horde;
}