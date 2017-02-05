#include <vector>

typedef std::vector< int > Time;

Time ComputeTime( int v1, int v2, int lead )
{
    Time result( 3 );

    if ( v1 >= v2 )
    {
        result[ 0 ] = -1;
        result[ 1 ] = -1;
        result[ 2 ] = -1;

        return result;
    }

    int timeSeconds = lead * 3600 / ( v2 - v1 );

    result[ 2 ] = timeSeconds;
    result[ 0 ] = timeSeconds / 3600;
    result[ 2 ] -= result[ 0 ] * 3600;
    result[ 1 ] = result[ 2 ] / 60;
    result[ 2 ] -= result[ 1 ] * 60;

    return result;
}
