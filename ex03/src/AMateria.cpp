/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:46:33 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/21 17:51:32 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("notype"){};

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &amateria) : _type(amateria._type){};

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    if (this != &amateria)
        _type = amateria._type;
    return (*this);
}

std::string const &AMateria::getType() const { return _type; }

void AMateria::use(ICharacter &target)
{
    std::cout << "Using AMateria on target: " << target.getName() << std::endl;
}