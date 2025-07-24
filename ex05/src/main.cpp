/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:19:20 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/24 23:03:27 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("UNKNOWN"); // Test for unknown level
	// extra tests
	// std::cout << "\n=== TEST 5: Invalid input (lowercase debug) ===\n";
	// harl.complain("debug");
	// std::cout << "\n=== TEST 6: Completely wrong input GRUNT===\n";
	// harl.complain("GRUNT");
	// std::cout << "\n=== TEST 7: Empty string ===\n";
	// harl.complain("");
	return 0;
}