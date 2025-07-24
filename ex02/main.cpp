/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:01:50 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 21:51:36 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/*PTR - pointer
- & reference - to avoid copying objects — we use a reference (an alias - another name for the same memory) 
  to the original string. !!! Changing the value through a reference changes the original!
- It’s faster and more efficient, especially for large objects like std::string.
*/
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
	
	// //extra test
	// std::string brain2 = "BRAIN2";
	// stringREF = brain2;//This does NOT make stringREF refer to brain2, but assigns the value brain to brain2
	// std::cout << "Addresses:" <<std::endl;
	// std::cout << "The memory address of the string variable: " << &brain <<std::endl;
	// std::cout << "The memory address of the brain2 variable: " << &brain2 <<std::endl;
	// std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
	// std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
	// std::cout << "Values:" <<std::endl;
	// std::cout << "The value of the string variable:          " << brain << std::endl;
	// std::cout << "The value of the brain2 variable:          " << brain2 << std::endl;
	// std::cout << "The value pointed to by stringPTR:         " << *stringPTR << std::endl;
	// std::cout << "The value pointed to by stringREF:         " << stringREF << std::endl;
	
	// //extra test
	// std::cout << "\n ***Extra test***" << std::endl;
	// int x = 10;
	// int& ref = x;
	// std::cout << "Address of x   = " << &x <<std::endl;
	// std::cout << "Address of ref = " << &ref <<std::endl;
	// std::cout << "value of x     = " << x << std::endl;
	// std::cout << "value of ref   = " << ref << std::endl;
	
	// ref = 20;
	// std::cout << "Address of x   = " << &x <<std::endl;
	// std::cout << "Address of ref = " << &ref <<std::endl;
	// std::cout << "value of x     = " << x << std::endl;
	// std::cout << "value of ref   = " << ref << std::endl;
	
	// int y = 30;
	// std::cout << "Address of y   = " << &y <<std::endl;
	// std::cout << "value of y     = " << y << std::endl;
	// ref = y; //This does NOT make ref refer to y! It just assigns the value of y to x
	// std::cout << "Address of y   = " << &y <<std::endl;
	// std::cout << "Address of x   = " << &x <<std::endl;
	// std::cout << "Address of ref = " << &ref <<std::endl;
	// std::cout << "value of x     = " << x << std::endl;
	// std::cout << "value of ref   = " << ref << std::endl;
	// std::cout << "value of y     = " << y << std::endl;
}
