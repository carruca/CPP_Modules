#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::exit(void) {
	return ;
}

void	PhoneBook::add(void) {
	return ;
}

void	PhoneBook::search(void) {
	return ;
}

Contact	PhoneBook::getContact(void) const {
	return this->_contact[0];
}

void	PhoneBook::setContact(void) {

	std::string	input;

	if (this->_contact[0].get_first_name().empty())
	{
		std::cout << "Please, input a new contact's information.\nFirst name: ";
		std::cin >> input;
		this->_contact[0].set_first_name(input);
		std::cout << "Last name: ";
		std::cin >> input;
		this->_contact[0].set_last_name(input);
		std::cout << "Nickname: ";
		std::cin >> input;
		this->_contact[0].set_nickname(input);
		std::cout << "Phone number: ";
		std::cin >> input;
		this->_contact[0].set_phone_number(input);
		std::cout << "Darkest secret: ";
		std::cin >> input;
		this->_contact[0].set_darkest_secret(input);
	}
	return ;
}
