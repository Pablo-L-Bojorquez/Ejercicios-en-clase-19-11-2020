#include <iostream>

namespace a
{
	int x{10};
}

namespace b
{
	int x{20};
}

int main()
{
	using namespace a;
	using namespace b;
	
	std::cout << x << '\n';//error x es ambiguo...
	
	return 0;
}
