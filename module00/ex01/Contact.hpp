/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouhairjamali <zouhairjamali@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:58:24 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/06 20:50:46 by zouhairjama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>

class Contact
{
private:
    std::string        _firstName;
    std::string        _lastName;
    std::string        _nickname;
    std::string        _phoneNumber;
    std::string        _darkSecret;

public:
    Contact();
    ~Contact();
    std::string    getFirstName(void) const;
    std::string    getLastName(void) const;
    std::string    getNickName(void) const;
    std::string    getPhoneNumber(void) const;
    std::string    getDarkSecret(void) const;
    void            setFirstName(std::string firstName);
    void            setLastName(std::string lastName);
    void            setNickName(std::string nickName);
    void            setPhoneNumber(std::string PhoneNumber);
    void            setDarkSecret(std::string secret);
};

#endif