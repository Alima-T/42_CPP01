/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:22:08 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/18 21:58:28 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"
#include <fstream>  // for std::ifstream, std::ofstream
#include <iostream> // for std::cerr, std::cout


Replacer::Replacer(const std::string& file, const std::string& s1, const std::string& s2) 
	: m_file(file), m_s1(s1), m_s2(s2){};

std::string Replacer::replaceAllInLine(const std::string& line)
{
	std::string result;
	size_t pos;
	size_t found;

	pos = 0;
	while((found = line.find(m_s1, pos)) != std::string::npos)
	{
		result +=line.substr(pos, found - pos);
		result += m_s2;
		pos = found + m_s1.length();
	}
	result += line.substr(pos);
	return result;
}
/*
- empty() - It returns true if the string has no characters in it (i.e. it’s empty: "").
- std::cerr is the standard error output stream
- BestPractice in C++: Declare vars as close as possible to their first use.
- hello.txt        <-- original file (untouched)
- hello.txt.replace  <-- new file with replaced content
- if (outputFile.fail()) is an alternative to if (!outputFile)
- is_open() checks only if the file is open: so must be used with fail (if (!outputFile.is_open() || outputFile.fail())
- Since inputFile/outputFile objects are local vars inside the function, they are destroyed at function exit, no needs to call close() explicitly.
*/
bool Replacer::tryReplaceInFile()
{
	if(m_s1.empty())
	{
		std::cerr << "Error." << std::endl;;
		return false;
	}

	std::ifstream inputFile;
	inputFile.open(m_file.c_str());
	if(!inputFile)
	{
		std::cerr << "Error: can not open input file '" << m_file << std::endl;
		return false;
	}

	std::ofstream outputFile;
	outputFile.open((m_file + ".replace").c_str());
	if (!outputFile.is_open() || outputFile.fail())
	{
		std::cerr << "Error: can not open output file '" << m_file << ".replace'." << std::endl;
		return false;
	}
	
	
	std::string line;
	while(std::getline(inputFile, line))
	{
		outputFile << replaceAllInLine(line) << std::endl;
	}

	return true;
}
