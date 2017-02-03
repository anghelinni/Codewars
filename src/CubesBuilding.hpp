
class ASum
{
public:
	static long long findNb( long long m )
	{
		long long volume = 0;
		long long numberOfCubes = 1;

		for ( ; volume < m; numberOfCubes++ )
		{
			volume += ( numberOfCubes * numberOfCubes * numberOfCubes );

			if ( volume < 0 )
			{
				// Overflow
				return -1;
			}
		}

		if ( volume == m )
		{
			return numberOfCubes - 1;
		}

		return -1;
	}
};
