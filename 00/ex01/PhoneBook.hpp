#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook {

public:

	int		size;

	PhoneBook(void);
	~PhoneBook(void);

	void	exit(void);
	void	add(void);
	void	search(void);
	Contact	getContact(void) const;
	void	setContact(void);

private:

	Contact	_contact[8];

};

#endif
