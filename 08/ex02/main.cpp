#include "MutantStack.hpp"
#include <list>
#include <iostream>

int	main( void ) {

	std::cout << "[ MutantStack ]" << std::endl;

	MutantStack<int>	mstack;

	mstack.push( 5 );
	mstack.push( 17 );

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push( 3 );
	mstack.push( 5 );
	mstack.push( 737 );
	mstack.push( 0 );

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while ( it != ite )
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "[ List ]" << std::endl;

	std::list<int>	lst;

	lst.push_back( 5 );
	lst.push_back( 17 );

	std::cout << lst.back() << std::endl;

	lst.pop_back();

	std::cout << lst.size() << std::endl;

	lst.push_back( 3 );
	lst.push_back( 5 );
	lst.push_back( 737 );
	lst.push_back( 0 );

	std::list<int>::iterator it_lst = lst.begin();
	std::list<int>::iterator ite_lst = lst.end();

	++it_lst;
	--it_lst;
	while ( it_lst != ite_lst )
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}

	return 0;
}
