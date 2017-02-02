#include <string>
#include <iostream>

#include "RevRot.hpp"

int multiple3_5( int max );
std::string expandedForm( int number );


int main()
{
	std::cout << RevRot::revRot( "123456987654", 6 ) << " expected 234561876549\n";
	std::cout << RevRot::revRot( "123456987653", 6 ) << " expected 234561356789\n";
	std::cout << RevRot::revRot( "66443875", 4 ) << " expected 44668753\n";
	std::cout << RevRot::revRot( "66443875", 8 ) << " expected 64438756\n";
	std::cout << RevRot::revRot( "664438769", 8 ) << " expected 67834466\n";
	std::cout << RevRot::revRot( "123456779", 8 ) << " expected 23456771\n";
	std::cout << RevRot::revRot( "", 8 ) << " expected \"\"\n";
	std::cout << RevRot::revRot( "123456779", 0 ) << " expected \"\"\n";

	std::cout << "Multiple sum for 10 is " << multiple3_5( 10 ) << std::endl;
	std::cout << "Multiple sum for 20 is " << multiple3_5( 20 ) << std::endl;
	std::cout << "Multiple sum for 100 is " << multiple3_5( 100 ) << std::endl;

	std::cout << expandedForm( 123456789 ) << std::endl;

	return 0;
}
