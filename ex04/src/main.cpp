/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:14:44 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/18 20:23:20 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "udage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	Replacer replacer(file, s1, s2);
	if(!replacer.tryReplaceInFile())
	{
		std::cerr << "Error. Failed to reaplace strings in file." << std::endl;
		return 1;
	}
	std::cout << "File processed successfully. Output written to " << file << ".replace." << std::endl;
	return 0;
}
