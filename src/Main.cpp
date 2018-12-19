#include <string>
#include <iostream>

#include "Main.hpp"
#include "RevRot.hpp"
#include "CubesBuilding.hpp"
#include "Tortoise.hpp"
#include "Eleven.hpp"
#include "PerimetersSum.hpp"
#include "DpSingleton.hpp"

void testRevRot()
{
	std::cout << "testRevRot() STARTED" << std::endl;
	std::cout << RevRot::revRot( "123456987654", 6 ) << " expected 234561876549\n";
	std::cout << RevRot::revRot( "123456987653", 6 ) << " expected 234561356789\n";
	std::cout << RevRot::revRot( "66443875", 4 ) << " expected 44668753\n";
	std::cout << RevRot::revRot( "66443875", 8 ) << " expected 64438756\n";
	std::cout << RevRot::revRot( "664438769", 8 ) << " expected 67834466\n";
	std::cout << RevRot::revRot( "123456779", 8 ) << " expected 23456771\n";
	std::cout << RevRot::revRot( "", 8 ) << " expected \"\"\n";
	std::cout << RevRot::revRot( "123456779", 0 ) << " expected \"\"\n";
	std::cout << "--------------------------------------" << std::endl << std::endl;
}

void testMultiple3_5()
{
	std::cout << "testMultiple3_5() STARTED" << std::endl;
	std::cout << "Multiple sum for 10 is " << multiple3_5( 10 ) << std::endl;
	std::cout << "Multiple sum for 20 is " << multiple3_5( 20 ) << std::endl;
	std::cout << "Multiple sum for 100 is " << multiple3_5( 100 ) << std::endl;
	std::cout << "--------------------------------------" << std::endl << std::endl;
}

void testExpandedForm()
{
	std::cout << "testExpandedForm() STARTED" << std::endl;
	std::cout << expandedForm( 123456789 ) << std::endl;
	std::cout << "--------------------------------------" << std::endl << std::endl;
}

void testAsum()
{
	std::cout << "testAsum() STARTED" << std::endl;
	std::cout << "Building 100: " << ASum::findNb( 100 ) << std::endl;
	std::cout << "Building 441: " << ASum::findNb( 441 ) << std::endl;
	std::cout << "Building 1071225: " << ASum::findNb( 1071225 ) << std::endl;
	std::cout << "Building 4183059834009: " << ASum::findNb( 26825883955641 ) << std::endl;
	std::cout << "Building 40539911473216: " << ASum::findNb( 40539911473216 ) << std::endl;
	std::cout << "Building 91716553919377: " << ASum::findNb( 91716553919377 ) << std::endl;
	std::cout << "--------------------------------------" << std::endl << std::endl;
}

void testTortoiseTimes()
{
	std::cout << "testTortoiseTimes() STARTED" << std::endl;
	Time t;
	t = ComputeTime( 720, 850, 70 );
	std::cout << t[ 0 ] << ":" << t[ 1 ] << ":" << t[ 2 ] << std::endl;

	t = ComputeTime( 80, 91, 37 );
	std::cout << t[ 0 ] << ":" << t[ 1 ] << ":" << t[ 2 ] << std::endl;
	std::cout << "--------------------------------------" << std::endl << std::endl;
}

void testEleven()
{
	std::cout << "testEleven() STARTED" << std::endl;
	std::cout << "11 " << ( eleven( "11" ) ? "is " : "is not " ) << "divisible by 11.\n";
	std::cout << "12 " << ( eleven( "12" ) ? "is " : "is not " ) << "divisible by 11.\n";
	std::cout << "970299 " << ( eleven( "970299" ) ? "is " : "is not " ) << "divisible by 11.\n";
	std::cout << "96059601 " << ( eleven( "96059601" ) ? "is " : "is not " ) << "divisible by 11.\n";
	std::cout << "96059600 " << ( eleven( "96059600" ) ? "is " : "is not " ) << "divisible by 11.\n";
	std::cout << "--------------------------------------" << std::endl << std::endl;
}

void testPerimetersSum()
{
	std::cout << "testPerimetersSum() STARTED" << std::endl;
	std::cout << "Perimeters sum for 0 is: " << SumFct::perimeter( 0 ) << std::endl;
	std::cout << "Perimeters sum for 1 is: " << SumFct::perimeter( 1 ) << std::endl;
	std::cout << "Perimeters sum for 2 is: " << SumFct::perimeter( 2 ) << std::endl;
	std::cout << "Perimeters sum for 6 is: " << SumFct::perimeter( 6 ) << std::endl;
	std::cout << "Perimeters sum for 7 is: " << SumFct::perimeter( 7 ) << std::endl;
	std::cout << "--------------------------------------" << std::endl << std::endl;
}


class Dupa
{
public:
    virtual void kkk() = 0;
};

class DupaInst : public Dupa
{
public:
    void kkk() { std::cout << "inlined kkk()\n"; }
};

int main()
{
	/*testRevRot();
	testMultiple3_5();
	testExpandedForm();
	testAsum();
	testTortoiseTimes();
	testEleven();
	testPerimetersSum();*/

	//testSingleton();
    DupaInst d;
    Dupa* dd = &d;

    dd->kkk();

	/*char c;
	std::cin >> c;*/

	return 0;
}
