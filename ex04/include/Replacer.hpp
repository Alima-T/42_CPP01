/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:24:59 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/18 19:26:26 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

class Replacer
{
	private:
	std::string m_file;
	std::string m_s1;
	std::string m_s2;
	
	std::string replaceAllInLine(const std::string& line);
	
	public:
	Replacer(const std::string& file, const std::string& s1, const std::string& s2);
	bool tryReplaceInFile();
};

#endif