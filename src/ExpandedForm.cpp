#include <string>

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
