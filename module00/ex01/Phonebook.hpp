
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
private:
	int         _index;
	int			_contactCount;
	Contact		_contact[8];
	void		printContact(int index) const;
	void		contactOutputCheck(std::string output) const;

public:
	Phonebook();
	~Phonebook(void);
	void		addContact(void);
	void		searchContact(void);
};

#endif