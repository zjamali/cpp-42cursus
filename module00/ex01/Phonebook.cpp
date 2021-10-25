/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:11:49 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/25 19:18:13 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
   Phonebook::_contactCount = 0;
   Phonebook::index = 0;
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
    std::string input;
    std::cout<< std::setw(45)<< "----------------ADD CONTACT----------"<<std::endl;
    std::cout<< "enter the first name:" << std::endl;
    std::cin>>input;
    _contact[index].setFirstName(input);
    std::cout<< "enter the last name:" << std::endl;
    std::cin>>input;
    _contact[index].setLastName(input);
    std::cout<< "enter the nickname:" << std::endl;
    std::cin>>input;
    _contact[index].setNickName(input);
    std::cout<< "enter the phone number:" << std::endl;
    std::cin>>input;
    _contact[index].setPhoneNumber(input);
    std::cout<< "enter the dark secret :" << std::endl;
    std::cin>>input;
    _contact[index].setDarkSecret(input);
    std::cout<< "-----Contact added ----" << std::endl;
    _contactCount++;
    index++;
}
void Phonebook::serchContact(void)
{
    int i = 0;

    if (_contactCount == 0)
    {
        std::cout<< std::setw(45)<< "NO CONTACT FOUND "<<std::endl;
    }
    else
    {
        std::cout<< std::setw(45)<< "--------------SEARCH CONTACT--------------"<<std::endl;
        std::cout<<"|" << std::setw(10)<< "index" <<"|" << std::setw(10)<< "first Name" <<"|" << std::setw(10)<< "last name" <<"|" << std::setw(10)<< "nick Name"<< "|" << std::endl;
        while (i < Phonebook::_contactCount)
        {
            Phonebook::printContact(i);
            i++;
        }
    }
}

void Phonebook::printContact(int index) const{
    std::cout<<"|" << std::setw(10);
    std::cout<< index + 1 ;
    std::cout<<"|";
    Phonebook::contactOutputCheck(_contact[index].getFirstName());
    std::cout<<"|";
    Phonebook::contactOutputCheck(_contact[index].getLastName());
    std::cout<<"|";
    Phonebook::contactOutputCheck(_contact[index].getNickName());
    std::cout<<"|" <<std::endl;
}

void Phonebook::contactOutputCheck(std::string output) const {
    int i = 0;
    if(output.size() > 10)
    {
        while (i < 9)
        {
            std::cout<< output[i];
            i++;
        }
        std::cout<< ".";
    }
    else
    {
        std::cout <<std::setw(10) << output;
    }
}