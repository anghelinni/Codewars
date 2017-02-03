typedef unsigned long long ull;

class SumFct
{
public:
	static ull perimeter( int n )
	{
		ull n1 = 0;
		ull n2 = 1;
		ull currentN = 0;
		ull sidesSum = ( n == 0 ) ? 0 : 1;
		for ( int i = 2; i <= n + 1; i++ )
		{
			currentN = n1 + n2;
			n1 = n2;
			n2 = currentN;
			sidesSum += currentN;
		}

		return 4 * sidesSum;
	}
};
