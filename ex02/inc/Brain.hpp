/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:07:38 by seozkan           #+#    #+#             */
/*   Updated: 2023/06/20 13:04:06 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <cstdlib>

class Brain
{
protected:
    std::string _ideas[100];

public:
    Brain();
    Brain(const Brain &brain);
    Brain &operator=(const Brain &brain);
    ~Brain();
    void printIdeas() const;
};

#endif