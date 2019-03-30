#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector<int> coll;
	
	for(int i = 1; i <= 20; ++i)
	{
		coll.push_back(i);
	}
	
	std::for_each(coll.cbegin(), coll.cend(), [] (int x) {std::cout << x << " ";});
	std::cout << std::endl;
}