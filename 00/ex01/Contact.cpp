#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::printFirstName(void) {

	if (this->_first_name.size())
	{
//		this->_first_name.resize(10);
		std::cout << this->_first_name.substr(0, 9);
	}
	return ;
}

std::string	Contact::getFirstName(void) const {

	return this->_first_name;
}

void	Contact::setFirstName(std::string input) {

	this->_first_name = input;
	return ;
}

void	Contact::printLastName(void) {

	if (this->_last_name.size())
	{
//		this->_last_name.resize(10);
		std::cout << this->_last_name.substr(0, 9);
	}
	return ;
}

std::string	Contact::getLastName(void) const {

	return this->_last_name;
}

void	Contact::setLastName(std::string input) {

	this->_last_name = input;
	return ;
}

void	Contact::printNickname(void) {

	if (this->_nickname.size())
	{
//		this->_nickname.resize(10);
		std::cout << this->_nickname.substr(0, 9);
	}
	return ;
}

std::string	Contact::getNickname(void) const {

	return this->_nickname;
}

void	Contact::setNickname(std::string input) {

	this->_nickname = input;
	return ;
}

void	Contact::printPhoneNumber(void) const {

	if (this->_phone_number.size())
		std::cout << this->_phone_number;
	return ;
}

std::string	Contact::getPhoneNumber(void) const {

	return this->_phone_number;
}

void	Contact::setPhoneNumber(std::string input) {

	this->_phone_number = input;
	return ;
}

void	Contact::printDarkestSecret(void) const {

	if (this->_darkest_secret.size())
		std::cout << this->_darkest_secret;
	return ;
}

std::string	Contact::getDarkestSecret(void) const {

	return this->_darkest_secret;
}

void	Contact::setDarkestSecret(std::string input) {

	this->_darkest_secret = input;
	return ;
}
