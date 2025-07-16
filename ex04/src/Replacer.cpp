/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:22:08 by aokhapki          #+#    #+#             */
/*   Updated: 2025/07/16 23:47:19 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(const std::string& file, const std::string& s1, const std::string& s2) 
	: m_file(file), m_s1(s1), m_s2(s2){};
