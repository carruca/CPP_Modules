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

	int	pos = 0;

	while (pos < this->_size)
	{
		this->_contact[pos].printFirstName();
		std::cout << std::endl;
		pos++;
	}
	return ;
}

Contact	PhoneBook::getContact(void) const {
	return this->_contact[this->_size];
}

void	PhoneBook::setContact(void) {

	std::cout << "Please, input a new contact's information.\nFirst name: ";
	std::cin >> this->input;
	this->_contact[this->_size].setFirstName(this->input);
	std::cout << "Last name: ";
	std::cin >> this->input;
	this->_contact[this->_size].setLastName(this->input);
	std::cout << "Nickname: ";
	std::cin >> this->input;
	this->_contact[this->_size].setNickname(this->input);
	std::cout << "Phone number: ";
	std::cin >> this->input;
	this->_contact[this->_size].setPhoneNumber(this->input);
	std::cout << "Darkest secret: ";
	std::cin >> this->input;
	this->_contact[this->_size].setDarkestSecret(this->input);
	return ;
}
