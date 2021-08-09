#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : size(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::exit(void) {
	return ;
}

void	PhoneBook::add(void) {

	std::cout << size << std::endl;
	if ((this->_contact[size].get_first_name()).empty())
		this->setContact();
	if (size < 7)
		this->size++;
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

	std::cout << "Please, input a new contact's information.\nFirst name: ";
	std::cin >> input;
	this->_contact[this->size].set_first_name(input);
	std::cout << "Last name: ";
	std::cin >> input;
	this->_contact[this->size].set_last_name(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	this->_contact[this->size].set_nickname(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	this->_contact[this->size].set_phone_number(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	this->_contact[this->size].set_darkest_secret(input);
	return ;
}
