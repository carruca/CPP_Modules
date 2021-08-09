#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	exit(void);
	void	add(void);
	void	search(void);

	Contact	getContact(void) const;
	void	setContact(void);


private:

	Contact	pb[8];

};

#endif
