#include <iostream>

const int g_x;//error las variables const deben inicializarse
constexpr int g_w;//error las variables constexpr deben inicializarse

const int g_y{1};
constexpr int g_z {2};
	
void doSomething()
{
	std::cout << g_y << '\n';
	std::cout << g_x << '\n';
}
	
int main()
{
	doSomething();
	std::cout << g_y << '\n';
	std::cout << g_z << '\n';
	
	return 0;
}
