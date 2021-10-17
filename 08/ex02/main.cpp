#include "MutantStack.hpp"
#include <list>
#include <deque>
#include <iostream>

int	main( void ) {

	std::cout << "MutantStack:" << std::endl;

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

	MutantStack<int>	mstack2;

	mstack2 = mstack;

	std::cout << "Begin element = " << *mstack2.begin() << std::endl;
	std::cout << "End element = " << *mstack2.end() << std::endl;

	std::cout << std::endl;

	std::cout << "List:" << std::endl;

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

	std::list<int>	lst2;

	lst2 = lst;

	std::cout << "Begin element = " << *lst2.begin() << std::endl;
	std::cout << "End element = " << *lst2.end() << std::endl;

	std::cout << std::endl;

	std::cout << "Deque:" << std::endl;

	std::deque<int>	dq;

	dq.push_back( 5 );
	dq.push_back( 17 );

	std::cout << dq.back() << std::endl;

	dq.pop_back();

	std::cout << dq.size() << std::endl;

	dq.push_back( 3 );
	dq.push_back( 5 );
	dq.push_back( 737 );
	dq.push_back( 0 );

	std::deque<int>::iterator it_dq = dq.begin();
	std::deque<int>::iterator ite_dq = dq.end();

	++it_dq;
	--it_dq;
	while ( it_dq != ite_dq )
	{
		std::cout << *it_dq << std::endl;
		++it_dq;
	}

	std::deque<int>	dq2;

	dq2 = dq;

	std::cout << "Begin element = " << *dq2.begin() << std::endl;
	std::cout << "End element = " << *dq2.end() << std::endl;

	return 0;
}
