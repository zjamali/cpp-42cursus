/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:45:16 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/06 15:56:31 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string str;
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            str = argv[i];
            for (int i = 0; str[i]; i++)
            {
                std::cout << (char)toupper(str[i]) ;
            }
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
}