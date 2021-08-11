#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _size(0), _oldest(0) {
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

	if (this->_size < 8)
	{
		this->setContact(this->_size);
		this->_size++;
	}
	else
	{
		this->setContact(this->_oldest);
		if (this->_oldest < 7)
			this->_oldest++;
		else
			this->_oldest = 0;
	}
	return ;
}

void	PhoneBook::search(void) {

	this->printContactTable();
	std::cout << "Please, input the index of the desired entry: ";
	if (std::cin >> this->_index && this->_index <= 7 && this->_index >= 0)
		this->printContact();
	else
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Sorry, wrong input" << std::endl;
	}
	return ;
}

void	PhoneBook::printContact(void) {

	std::cout << "First name: ";
	this->_contact[this->_index].printFirstName(0);
	std::cout << std::endl;
	std::cout << "Last name: ";
	this->_contact[this->_index].printLastName(0);
	std::cout << std::endl;
	std::cout << "Nickname: ";
	this->_contact[this->_index].printNickname(0);
	std::cout << std::endl;
	std::cout << "Phone number: ";
	this->_contact[this->_index].printPhoneNumber();
	std::cout << std::endl;
	std::cout << "Darkest secret: ";
	this->_contact[this->_index].printDarkestSecret();
	std::cout << std::endl;
	return ;
}

void	PhoneBook::printContactTable(void) {

	this->_pos = 0;
	while (this->_pos < this->_size)
	{
		std::cout << "|" << std::setw(10);
		std::cout << this->_pos;
		std::cout << "|" << std::setw(10);
		this->_contact[this->_pos].printFirstName(1);
		std::cout << "|" << std::setw(10);
		this->_contact[this->_pos].printLastName(1);
		std::cout << "|" << std::setw(10);
		this->_contact[this->_pos].printNickname(1);
		std::cout << "|" << std::endl;
		this->_pos++;
	}
	return ;
}

void	PhoneBook::setContact(int index) {

	std::cout << "Please, input a new contact's information.\nFirst name: ";
	std::cin >> this->_input;
	this->_contact[index].setFirstName(this->_input);
	std::cout << "Last name: ";
	std::cin >> this->_input;
	this->_contact[index].setLastName(this->_input);
	std::cout << "Nickname: ";
	std::cin >> this->_input;
	this->_contact[index].setNickname(this->_input);
	std::cout << "Phone number: ";
	std::cin >> this->_input;
	this->_contact[index].setPhoneNumber(this->_input);
	std::cout << "Darkest secret: ";
	std::cin >> this->_input;
	this->_contact[index].setDarkestSecret(this->_input);
	return ;
}
