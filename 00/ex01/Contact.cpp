#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {

	return ;
}

std::string	Contact::get_first_name(void) const {

	return this->_first_name;
}

void	Contact::set_first_name(std::string input) {

	this->_first_name = input;
	return ;
}

std::string	Contact::get_last_name(void) const {

	return this->_last_name;
}

void	Contact::set_last_name(std::string input) {

	this->_last_name = input;
	return ;
}

std::string	Contact::get_nickname(void) const {

	return this->_nickname;
}

void	Contact::set_nickname(std::string input) {

	this->_nickname = input;
	return ;
}

std::string	Contact::get_phone_number(void) const {

	return this->_phone_number;
}

void	Contact::set_phone_number(std::string input) {

	this->_phone_number = input;
	return ;
}

std::string	Contact::get_darkest_secret(void) const {

	return this->_darkest_secret;
}

void	Contact::set_darkest_secret(std::string input) {

	this->_darkest_secret = input;
	return ;
}

