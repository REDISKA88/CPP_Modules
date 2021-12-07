#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <iostream>
#include <cstring>
#include <string>

class Karen {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:

	Karen();
	~Karen();
	void complain( std::string level );
};


#endif
