/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:11:49 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/22 16:29:56 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
   Phonebook::_contactCount = 0;
}

Phonebook::~Phonebook()
{
}

int Phonebook::getNumberContact(void) const
{
    return this->_contactCount;
}

void Phonebook::addContact(void)
{
    
}

void Phonebook::serchContact(void)
{
    
}
