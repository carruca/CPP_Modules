#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>

class	Contact {

public:

	Contact(void);
	~Contact(void);

	void		printFirstName(int truncated);
	std::string	getFirstName(void) const;
	void		setFirstName(std::string input);

	void		printLastName(int truncated);
	std::string	getLastName(void) const;
	void		setLastName(std::string input);

	void		printNickname(int truncated);
	std::string	getNickname(void) const;
	void		setNickname(std::string input);

	void		printPhoneNumber(void) const;
	std::string	getPhoneNumber(void) const;
	void		setPhoneNumber(std::string input);

	void		printDarkestSecret(void) const;
	std::string	getDarkestSecret(void) const;
	void		setDarkestSecret(std::string input);

private:
	
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
