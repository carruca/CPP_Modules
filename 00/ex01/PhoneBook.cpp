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

	this->setContact();
	if (this->_size < 7)
		this->_size++;
	return ;
}

void	PhoneBook::search(void) {

	this->printContact();
	return ;
}

void	PhoneBook::printContact(void) const {
	if (!(this->_contact[0].getFirstName().empty()))
		std::cout << this->_contact[0].getFirstName() << std::endl;
	return ;
}

Contact	PhoneBook::getContact(void) const {
	return this->_contact[this->_size];
}

void	PhoneBook::setContact(void) {

	std::string	input;

	std::cout << "Please, input a new contact's information.\nFirst name: ";
	std::cin >> input;
	this->_contact[this->_size].setFirstName(input);
	std::cout << "Last name: ";
	std::cin >> input;
	this->_contact[this->_size].setLastName(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	this->_contact[this->_size].setNickname(input);
	std::cout << "Phone number: ";
	std::cin >> input;
	this->_contact[this->_size].setPhoneNumber(input);
	std::cout << "Darkest secret: ";
	std::cin >> input;
	this->_contact[this->_size].setDarkestSecret(input);
	return ;
}
