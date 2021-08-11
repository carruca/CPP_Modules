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
	void		setContact(int index);

private:

	std::string	_input;
	int			_index;
	int			_size;
	int			_oldest;
	int			_pos;
	Contact		_contact[8];

};

#endif
