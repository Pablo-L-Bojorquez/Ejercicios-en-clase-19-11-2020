#include <iostream>
#include <string_view>

int main()
{
	std::string_view str={"Los trenes son rapidos!"};
	
	std::cout << str.length() << '\n';
	std::cout << str.length(0, str.find(' ')) << '\n';
	std::cout << (str == "Los trenes son rapidos!");
	
	std::cout << str.starts_with("Botes") << '\n';
	std::cout << str.end_with("rapidos!") << '\n';
	
	std::cout << str << ' ' << '\n';
	
	return 0;
}
