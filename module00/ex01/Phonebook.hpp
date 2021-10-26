
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
private:
	int         _index;
	int			_contactCount;
	Contact		_contact[8];

public:
	Phonebook();
	~Phonebook(void);
	void		addContact(void);
	void		serchContact(void);
	void		printContact(int index) const;
	void		contactOutputCheck(std::string output) const;
};

#endif