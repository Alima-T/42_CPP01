/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:01:50 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/10 19:43:26 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string brain;
	std::string* stringPTR;
	
	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	std::string& stringREF = brain;
	
	std::cout << "Addresses:" <<std::endl;
	std::cout << "The memory address of the string variable: " << &brain <<std::endl;
	std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
	std::cout << "Values:" <<std::endl;
	std::cout << "The value of the string variable:          " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR:         " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:         " << stringREF << std::endl;
}