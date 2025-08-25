/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:53:53 by aykrifa          #+#    #+#              */
/*   Updated: 2025/08/25 03:27:55 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void):	_Name("Default ClapTrap"), _HitPoint(10),
				_EnergyPoint(10), _AttackDamage(0)
{
	std::cout << "[🔧]"
		<< "ClapTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name):	_Name(name), _HitPoint(10),
				_EnergyPoint(10), _AttackDamage(0)
{
	std::cout << "[🔧]"
		<< "ClapTrap " << this->_Name
		<< " has been created !"
		<< std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[💥]"
		<< "ClapTrap " << this->_Name
		<< " has been destroyed !"
		<< std::endl;
	return ;
}

ClapTrap		ClapTrap::operator=(ClapTrap &rhs)
{
	if (&rhs == this)
		return (*this);
	_Name = rhs._Name;
	_HitPoint = rhs._HitPoint;
	_EnergyPoint = rhs._EnergyPoint;
	_AttackDamage = rhs._AttackDamage;
	return (*this);
}

void			ClapTrap::attack(const std::string &target)
{
	if (!this->_EnergyPoint)
	{
		std::cout << "[🪫]"
			<< "ClapTrap " << this->_Name
			<< " cannot attack, he is exhausted !"
			<< std::endl;
		return ;
	}
	this->_EnergyPoint--;
	std::cout << "[👊]"
		<< "ClapTrap " << this->_Name
		<< " attacks " << target << ", causing "
		<< this->_AttackDamage << " points of damage ! "
		<< this->_EnergyPoint << " Energy left !"
		<< std::endl;
	return ;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint >= amount)
		this->_HitPoint -= amount;
	else
		this->_HitPoint = 0;
	std::cout << "[🩸]"
		<< "ClapTrap " << this->_Name
		<< " take " << amount << " points of damage ! "
		<< this->_HitPoint << " HP left !"
		<< std::endl;
	return ;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_EnergyPoint)
	{
		std::cout << "ClapTrap " << this->_Name
			<< " cannot be Repaired, he is exhausted !"
			<< std::endl;
		return ;
	}
	this->_EnergyPoint--;
	this->_HitPoint += amount;
	std::cout << "[🩹]"
		<< "ClapTrap " << this->_Name
		<< " is repairing " << amount << "HP ! "
		<< this->_HitPoint << " HP left ! "
		<< this->_EnergyPoint << " Energy left !"
		<< std::endl;
	return ;
}
