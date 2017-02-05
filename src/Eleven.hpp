#include <string>

bool eleven( std::string const& number )
{
    int diff = number[ number.length() - 1 ] - '0';
    int carry = 0;

    for ( int i = number.length() - 1; i > 0; --i )
    {
        int newDiff = number[ i - 1 ] - '0' - diff - carry;
        if ( newDiff < 0 )
        {
            newDiff = 10 - diff + number[ i - 1 ] - '0' - carry;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        diff = newDiff;
    }

    if ( diff == 0 && carry == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}
