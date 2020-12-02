#include <iostream>

int main()
{
	{
	using namespace Foo;
	//llamada a Foo::
	}// using namespace Foo expira
	
	{
		using namespace Goo;
		//llama a Goo::
	}// using namespace Goo expira
	
	return 0;
}
