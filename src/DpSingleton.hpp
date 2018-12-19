/**

Task would require implementing a singleton class.
Need to provide test cases verifying correctness of the implementation.

*/

class Singleton
{
public:
	static Singleton* Create()
	{
		return nullptr;
	}

private:
	Singleton() {}
	~Singleton() {}
};

void testSingleton();
