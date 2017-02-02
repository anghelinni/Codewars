#include <string>

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
