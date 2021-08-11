#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void		exit(void);
	void		add(void);
	void		search(void);

	void		printContact(void);
	void		printContactTable(void);
	Contact		getContact(void) const;
	void		setContact(void);

private:

	std::string	_input;
	int			_index;
	int			_size;
	int			_pos;
	Contact		_contact[8];

};

#endif
