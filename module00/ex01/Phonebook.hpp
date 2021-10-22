/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:09:25 by zjamali           #+#    #+#             */
/*   Updated: 2021/10/22 15:59:25 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
private:
	int         _contactCount;
	Contact		_contact[8];

public:
	Phonebook();
	~Phonebook(void);
	int         getNumberContact(void) const;
	void		addContact(void);
	void		serchContact(void);
};

#endif