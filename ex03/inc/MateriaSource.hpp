/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:46:23 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/22 15:50:58 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

#define LOG 1
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

class MateriaSource : public IMateriaSource
{
protected:
    AMateria *_slots[4];

public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &materiaSource);
    virtual ~MateriaSource();

    MateriaSource &operator=(const MateriaSource &materiaSource);

    void learnMateria(AMateria *m);
    AMateria *createMateria(const std::string &type);
};

#endif