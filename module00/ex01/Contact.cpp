/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:59:31 by zjamali           #+#    #+#             */
/*   Updated: 2021/11/20 15:35:54 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
        /*
        * std::cout << "Contact constructor called" << std::endl;
        */
}

Contact::~Contact()
{
        /*
        * std::cout << "Contcat destructor called" << std::endl;
        */
}

std::string     Contact::getFirstName(void) const {
        return (this->_firstName);
}
std::string     Contact::getLastName(void) const {
        return (this->_lastName);
}
std::string     Contact::getNickName(void) const {
        return (this->_nickname);
}
std::string     Contact::getPhoneNumber(void) const {
        return (this->_phoneNumber);
}
std::string     Contact::getDarkSecret(void) const {
        return (this->_darkSecret);
}

void            Contact::setFirstName(std::string firstName)
{
        this->_firstName = firstName;
}
void            Contact::setLastName(std::string lastName)
{
        this->_lastName = lastName;
}
void            Contact::setNickName(std::string nickName)
{
        this->_nickname = nickName;
}
void            Contact::setPhoneNumber(std::string phoneNumber)
{
        this->_phoneNumber = phoneNumber;
}
void            Contact::setDarkSecret(std::string secret)
{
        this->_darkSecret = secret;
}
