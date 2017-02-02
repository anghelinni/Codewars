#include <iostream>

#include <string>
//#include <cmath>

class RevRot
{
public:

	static bool shouldReverse( const std::string& str )
	{
		bool reverse = true;

		for ( auto it = str.cbegin(); it != str.cend(); it++ )
		{
			if ( *it % 2 == 1 )
			{
				reverse = !reverse;
			}
		}

		return reverse;
	}

	static std::string& reverseString( std::string& str )
	{
		std::string tmp;
		for ( auto it = str.crbegin(); it != str.crend(); it++ )
		{
			tmp += *it;
		}

		str.swap( tmp );

		return str;
	}

	static std::string& rotateString( std::string& str )
	{
		std::string tmp;
		tmp += str.substr( 1, str.length() - 1 );
		tmp += str[ 0 ];

		str.swap( tmp );

		return str;
	}

	static std::string revRot( const std::string& strng, unsigned int sz )
	{
		if ( sz == 0 )
		{
			return "";
		}

		int curPos = 0;
		std::string resultString;

		while ( ( curPos + sz ) <= strng.length() )
		{
			std::string chunk = strng.substr( curPos, sz );

			resultString += shouldReverse( chunk ) ? reverseString( chunk ) : rotateString( chunk );

			curPos += sz;
		}

		return resultString;
	}
};

int multiple3_5( int max )
{
	int multipleOf3 = 3;
	int multipleOf5 = 5;
	int theSum = 0;

	while ( multipleOf3 < max )
	{
		theSum += multipleOf3;
		multipleOf3 += 3;
	}

	while ( multipleOf5 < max )
	{
		if ( ( multipleOf5 % 3 ) != 0 )
			theSum += multipleOf5;
		multipleOf5 += 5;
	}

	return theSum;
}

std::string expandedForm( int number )
{
	std::string result;

	std::string strNumber = std::to_string( number );
	int numOfZeros = strNumber.length() - 1;

	for ( int i = 0; numOfZeros >= 0; i++, numOfZeros-- )
	{
		result += strNumber[ i ];
		result.append( numOfZeros, '0' );
		result += " + ";
	}
	result.pop_back();
	result.pop_back();
	result.pop_back();

	return result;
}

int main()
{
	/*std::cout << RevRot::revRot( "123456987654", 6 ) << " expected 234561876549\n";
	std::cout << RevRot::revRot( "123456987653", 6 ) << " expected 234561356789\n";
	std::cout << RevRot::revRot( "66443875", 4 ) << " expected 44668753\n";
	std::cout << RevRot::revRot( "66443875", 8 ) << " expected 64438756\n";
	std::cout << RevRot::revRot( "664438769", 8 ) << " expected 67834466\n";
	std::cout << RevRot::revRot( "123456779", 8 ) << " expected 23456771\n";
	std::cout << RevRot::revRot( "", 8 ) << " expected \"\"\n";
	std::cout << RevRot::revRot( "123456779", 0 ) << " expected \"\"\n";*/
	/*std::cout << "Multiple sum for 10 is " << multiple3_5( 10 ) << std::endl;
	std::cout << "Multiple sum for 20 is " << multiple3_5( 20 ) << std::endl;
	std::cout << "Multiple sum for 100 is " << multiple3_5( 100 ) << std::endl;*/

	std::cout << expandedForm( 123456789 ) << std::endl;

	return 0;
}
