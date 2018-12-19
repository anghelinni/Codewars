#include "DpSingleton.hpp"
#include <iostream>

bool testConstruct()
{
	Singleton* s = new Singleton();

	if ( nullptr != s )
	{
		return false;
	}

	return true;
}

bool testCreate()
{
	Singleton* s1 = Singleton::Create();
	if ( nullptr == s1 )
	{
		return false;
	}

	Singleton* s2 = Singleton::Create();
	if ( s1 != s2 )
	{
		return false;
	}

	return true;
}

bool testDelete()
{
	return true;
}

void testSingleton()
{
	bool pass = testConstruct();
	if ( !pass )
	{
		std::cout << "testConstruct() failed\n";
		return;
	}

	pass = testCreate();
	if ( !pass )
	{
		std::cout << "testCreate() failed\n";
		return;
	}

	pass = testDelete();
	if ( !pass )
	{
		std::cout << "testDelete() failed\n";
		return;
	}
}
