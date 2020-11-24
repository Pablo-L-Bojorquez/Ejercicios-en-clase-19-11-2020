#include <iostream>

int main() 
{
	int x{5};
	int y = ++x;
	
	std::cout << x << ' ' << y << '\n';
	
	int i{5};
	int j = i++;
	
	std::cout << i << ' ' << j <<'\n';
	return 0;
}
