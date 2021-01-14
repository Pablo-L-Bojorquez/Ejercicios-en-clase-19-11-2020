#include <cstring>
#include <iostream>
#include <string>
#include <string_view>

int main()
{
	std::string_view sv{"pelota"};
	
	sv.remove_suffix(3);
	
	std::string str{sv};
	
	auto szNullTerminated{str.c_str()};
		
	std::cout << str << " tiene "<< std::strlen(szNullTerminated) << " Letra(s) \n";
}
	return 0;
}
