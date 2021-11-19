
#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
   Phonebook::_contactCount = 0;
   Phonebook::_index = 0;
   std::cout << "Phonebook constructor called" << std::endl;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook destructor called" << std::endl;
}

void Phonebook::addContact(void)
{
    std::string input;

    std::cout<< "----------------ADD CONTACT----------"<<std::endl;
    std::cout<< "enter the first name:";
    std::getline(std::cin, input);
    _contact[_index].setFirstName(input);
    std::cout<< "enter the last name:";
    std::getline(std::cin, input);
    _contact[_index].setLastName(input);
    std::cout<< "enter the nickname:" ;
    std::getline(std::cin, input);
    _contact[_index].setNickName(input);
    std::cout<< "enter the phone number:" ;
    std::getline(std::cin, input);
    _contact[_index].setPhoneNumber(input);
    std::cout<< "enter the dark secret :" ;
    std::getline(std::cin, input);
    _contact[_index].setDarkSecret(input);
    std::cout<< "-----Contact added ----" << std::endl;
    _index = ((_index + 1) % 8);
    if (_contactCount < 8)
        _contactCount++;
}
void Phonebook::searchContact(void)
{
    int i = 0;
    std::string input;
    int index;

    if (_contactCount == 0)
        std::cout<< "NO CONTACT FOUND "<<std::endl;
    else
    {
        std::cout<<"--------------SEARCH CONTACT-----------------"<<std::endl;
        std::cout<<"|" << std::setw(10)<< "index" <<"|" << std::setw(10)<< "first Name" <<"|" << std::setw(10)<< "last name" <<"|" << std::setw(10)<< "nick Name"<< "|" << std::endl;
        while (i < Phonebook::_contactCount)
        {
            Phonebook::printContact(i);
            i++;
        }
        std::cout<<"enter contact index or type retun to return to main > ";
        std::getline(std::cin, input);
        if (input == "return" || std::cin.eof())
            return;
        index = std::atoi(input.c_str());
        while (index > Phonebook::_contactCount || index == 0 || input.length() != 1)
        {
            std::cout << "contact not exist to retun to main menu enter return > " << std::endl;
            std::cout<<"enter contact index : ";
            std::getline(std::cin, input);
            if (input == "return" || std::cin.eof())
                return;
            index = std::atoi(input.c_str());
        }
        if (index <= Phonebook::_contactCount)
        {
            std::cout<<"--------------CONTACT DEATAILS-----------------"<<std::endl;
            std::cout << "|" << std::setw(13) << "index" << "| " << index << std::endl;
            std::cout << "|" << std::setw(13) << "first name" << "| " << Phonebook::_contact[index - 1].getFirstName() << std::endl;
            std::cout << "|" << std::setw(13) << "last name" << "| " << Phonebook::_contact[index - 1].getLastName() << std::endl;
            std::cout << "|" << std::setw(13) << "nick name" << "| " << Phonebook::_contact[index - 1].getNickName() << std::endl;
            std::cout << "|" << std::setw(13) << "phone number" << "| " << Phonebook::_contact[index - 1].getPhoneNumber() << std::endl;
            std::cout << "|" << std::setw(13) << "dark secret" << "| " << Phonebook::_contact[index - 1].getDarkSecret() << std::endl;
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
            if (output[i] == '\t')
                std::cout << " ";
            else
                std::cout<< output[i];
            i++;
        }
        std::cout<< ".";
    }
    else
    {
        while (i < (int)output.size())
        {
            if (output[i] == '\t')
                output[i] = ' ';
            i++;
        }
        std::cout << std::setw(10) << output;
    }
}