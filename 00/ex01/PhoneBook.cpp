#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _size(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::exit(void) {
	std::exit(EXIT_SUCCESS);
	return ;
}

void	PhoneBook::add(void) {

	std::cout << this->_size << std::endl;
	this->setContact();
	if (this->_size < 7)
		this->_size++;
	return ;
}

void	PhoneBook::search(void) {
	return ;
}

Contact	PhoneBook::getContact(void) const {
	return this->_contact[this->_size];
}

void	PhoneBook::setContact(void) {

	std::string	input;

	std::cout << "Please, input a new contact's information.\nFirst name: ";
	std::cin >> input;
	this->_contact[this->_size].set_first_name(input);
	std::cout << "Last name: ";
	std::cin >> input;
	this->_contact[this->_size].set_last_name(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	this->_contact[this->_size].set_nickname(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	this->_contact[this->_size].set_phone_number(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	this->_contact[this->_size].set_darkest_secret(input);
	return ;
}
