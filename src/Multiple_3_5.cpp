
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
