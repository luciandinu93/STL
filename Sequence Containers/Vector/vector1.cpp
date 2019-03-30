#include <vector>
#include <iostream>

int main()
{
	std::vector<int> coll;  // vector container for integer elements
	
	// append elements with value 1 to 6
	for(int i = 1; i <= 6; ++i)
	{
		coll.push_back(i);
	}
	
	// print all elements followed by space 
	for(int i = 0; i < coll.size(); ++i)
	{
		std::cout << coll[i] << ' ';
	}
	
	std::cout << std::endl;
}