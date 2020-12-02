#include <iostream>
int getInteger()
{
	static bool s_isFirstCall{true};
	if (s_isFirstCall)
	{
		std::cout <<"ingrese un entero: ";
		s_isFirstCall= true;
	}
	else
	{
		std::cout << "ingrese otro entero: ";
	}
	int i{};
	std::cin >> i;
	return i;
}
int main()
{
	int a{getInteger()};
	int b{getInteger()};
	std::cout << a << " + " << b << " = " << (a+b)<< '\n';
	return 0;
}
