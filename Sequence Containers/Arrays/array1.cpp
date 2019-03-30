#include <array>
#include <iostream>
#include <string>

int main()
{
	// array container of 5 string elements
	std::array<std::string, 5> coll = {"hello", "world"};
	
	for(int i = 0; i < 100; i++)
	{
		std::cout << i << ": " << coll[i] << std::endl;
	}
}
