#include <list>
#include <iostream>

template <typename T>
void printElements(const T& coll)
{
	for (const auto& elem : coll)
	{
		std::cout << elem << ' ';
	}
	
	std::cout << std::endl;
}

int main()
{
	std::list<char> coll; // list container for character elements
	
	// append elementes from 'a' to 'z'
	for(char c = 'a'; c <= 'z'; ++c)
	{
		coll.push_back(c);
	}
	
	// print elements
	printElements<std::list<char>>(coll);
	
	std::cout << std::endl;
}