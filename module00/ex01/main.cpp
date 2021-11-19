/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:27:30 by zjamali           #+#    #+#             */
/*   Updated: 2021/11/19 18:33:06 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

int main()
{
    Phonebook phone;
    std::string command;
    
    std::cout<< "-------------------------------------------"<<std::endl;
    std::cout<< "|      welcome to PhoneBook               |"<<std::endl;
    std::cout<< "| -> to add a contact type ADD            |"<<std::endl;
    std::cout<< "| -> to search for a contact type SEARCH  |"<<std::endl;
    std::cout<< "| -> to exit for a contact type EXIT      |"<<std::endl;
    std::cout<< "-------------------------------------------"<<std::endl;
    std::cout<< "> ";
    while(std::getline(std::cin, command))
    {
        if (command == "ADD")
            phone.addContact();
        else if (command == "SEARCH")
            phone.searchContact();
        else if (command == "EXIT")
            return (0);
        else
            std::cout<< "Please, type ADD,SEARCH or EXIT" <<std::endl;
        
        std::cout<< std::endl;
        std::cout<< "-------------------------------------------"<<std::endl;
        std::cout<< "| -> to add a contact type ADD            |"<<std::endl;
        std::cout<< "| -> to search for a contact type SEARCH  |"<<std::endl;
        std::cout<< "| -> to exit for a contact type EXIT      |"<<std::endl;
        std::cout<< "-------------------------------------------"<<std::endl;
        std::cout<< "> ";
    } 
    return (0); 
}