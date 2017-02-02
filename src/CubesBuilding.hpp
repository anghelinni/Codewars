
class ASum
{
public:
	static long long findNb( long long m )
	{
		long long volume = 0;
		int numberOfCubes = 1;

		for ( ; volume < m; numberOfCubes++ )
		{
			volume += numberOfCubes * numberOfCubes * numberOfCubes;
			if ( numberOfCubes == 3218 )
			{
				volume = volume;
			}
		}

		if ( volume == m )
		{
			return numberOfCubes - 1;
		}

		return -1;
	}
};
