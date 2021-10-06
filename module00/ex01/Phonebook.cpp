/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:11:49 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/06 18:15:02 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    this->contact = 0;
}

Phonebook::~Phonebook()
{
    
}

int Phonebook::getNumberContact(void) const
{
    return Phonebook::_contactCount;
}
