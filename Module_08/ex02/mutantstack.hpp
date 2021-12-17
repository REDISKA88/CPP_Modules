#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template< typename T >
class	MutantStack : public std::stack<T> {

public:

	typedef typename std::stack<T>::container_type::iterator	iterator;

	MutantStack( void ) { }
	MutantStack( MutantStack const &src ) : std::stack<T>( src ) {

		*this = src;
		return ;
	}
	~MutantStack( void ) { }

	MutantStack		&operator=( MutantStack const &rhs ) {

		if ( this == &rhs )
			return *this;
		this->std::stack<T>::operator=( rhs );
		return *this;
	}

	iterator	begin( void ) {

		return this->std::stack<T>::c.begin();
	}

	iterator	end( void ) {

		return this->std::stack<T>::c.end();
	}
};

#endif