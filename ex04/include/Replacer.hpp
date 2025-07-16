/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:24:59 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/16 23:45:11 by aokhapki         ###   ########.fr       */
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
	
	public:
	Replacer(const std::string& file, const std::string& s1, const std::string& s2);
	const std::string read(std::string& file);
	const std::string& replace(std::string& s1, std::string& s2)
	
}
#endif