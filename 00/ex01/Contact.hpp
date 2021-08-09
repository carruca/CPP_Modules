#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class	Contact {

public:

	Contact(void);
	~Contact(void);

	std::string	get_first_name(void) const;
	void		set_first_name(std::string input);
	std::string	get_last_name(void) const;
	void		set_last_name(std::string input);
	std::string	get_nickname(void) const;
	void		set_nickname(std::string input);
	std::string	get_phone_number(void) const;
	void		set_phone_number(std::string input);
	std::string	get_darkest_secret(void) const;
	void		set_darkest_secret(std::string input);

private:
	
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif
