/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aykrifa <aykrifa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 08:53:19 by aykrifa           #+#    #+#             */
/*   Updated: 2025/08/23 13:35:11 by aykrifa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	kevin("Kevin");

	kevin.attack("Bryan");
	kevin.beRepaired(100);
	kevin.takeDamage(110);
	kevin.takeDamage(1);
	kevin.takeDamage(1);
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	kevin.attack("Bryan");
	return 0;
}
