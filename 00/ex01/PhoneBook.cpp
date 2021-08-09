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

	std::cout << "Please, input a new contact's information.\nFirst name: ";
	std::cin >> this->pb[0].first_name;
	std::cout << "Last name: ";
	std::cin >> this->pb[0].last_name;
	std::cout << "Nickname: ";
	std::cin >> this->pb[0].nickname;
	std::cout << "Phone number: ";
	std::cin >> this->pb[0].phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> this->pb[0].darkest_secret;
	return ;
}

void	PhoneBook::search(void) {
	return ;
}

Contact	PhoneBook::getContact(void) const {
	return this->pb[0];
}

void	PhoneBook::setContact(void) {
	return ;
}
