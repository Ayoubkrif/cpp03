/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:53:53 by aykrifa          #+#    #+#              */
/*   Updated: 2025/08/25 05:29:59 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"


FragTrap::FragTrap(void):	ClapTrap()
{

	_Name = "Default FragTrap";
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
	std::cout << "[🔧]"
		<< "FragTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

FragTrap::FragTrap(std::string name):	ClapTrap()
{
	_Name = "Default FragTrap";
	_Name = name;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
	std::cout << "[🔧]"
		<< "FragTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[💥]"
		<< "FragTrap " << this->_Name
		<< " has been destroyed !"
		<< std::endl;
	return ;
}

FragTrap		FragTrap::operator=(FragTrap &rhs)
{
	if (&rhs == this)
		return (*this);
	_Name = rhs._Name;
	_HitPoint = rhs._HitPoint;
	_EnergyPoint = rhs._EnergyPoint;
	_AttackDamage = rhs._AttackDamage;
	return (*this);
}

void			FragTrap::highFivesGuys(void)
{
	std::cout << "[✋]"
		<< "FragTrap " << this->_Name
		<< " is asking for a high five !"
		<< std::endl;
	return ;
}
