/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:58:24 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/06 18:11:15 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact
{
private:
    std::string        _firstName[20];
    std::string        _lastName[20];
    std::string        _nickname[20];
    std::string        _phoneNumber;
    std::string        _darkSecret[50];

public:
    Contact(char firstName[20], char lastName[20], char nickName[20],
        long PhoneNumber, char secret[50]);
    ~Contact();
};



#endif