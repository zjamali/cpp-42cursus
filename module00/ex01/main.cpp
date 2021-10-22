/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:27:30 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/22 18:37:11 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

int main()
{
    Phonebook phone;
    std::string command;
    
    while(1)
    {
        std::cout<< std::setw(45)<< "-------------------------------------------"<<std::endl;
        std::cout<< std::setw(45)<< "|      welcome to PhoneBook               |"<<std::endl;
        std::cout<< std::setw(45)<< "|   -to add a contact type ADD            |"<<std::endl;
        std::cout<< std::setw(45)<< "|   -to search for a contact type SEARCH  |"<<std::endl;
        std::cout<< std::setw(45)<< "|   -to exit for a contact type EXIT      |"<<std::endl;
        std::cout<< std::setw(45)<< "------------------------------------------"<<std::endl;
        std::cout<< std::setw(5)<< "> ";
        std::cin>>command;
        if (command == "ADD")
        {

        }
        else if (command == "SEARCH")
        {
            std::cout<< std::setw(40)<< "------------------------------------------"<<std::endl;
        }
        else if (command == "EXIT")
        {
            return (0);
        }
        else
        {
            std::cout<< "Please, type ADD,SEARCH or EXIT" <<std::endl;
        }
    }   
}