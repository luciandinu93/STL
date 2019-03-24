#include <forward_list>
#include <iostream>

int main()
{
	std::forward_list<long> coll = {2, 3, 5, 7, 11, 13, 17 };
	
	coll.resize(9);
	coll.resize(10, 99);
	
	for(auto elem : coll)
	{
		std::cout << elem << ';';
	}
	std::cout << std::endl;
}