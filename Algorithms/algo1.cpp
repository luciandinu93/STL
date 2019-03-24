#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> coll = {2, 5, 4, 1, 6, 3};
	
	auto minpos = std::min_element(coll.cbegin(), coll.cend());
	std::cout << "min: " << *minpos << std::endl;
	auto maxpos = std::max_element(coll.cbegin(), coll.cend());
	std::cout << "max: " << *maxpos << std::endl;
	
	std::sort(coll.begin(), coll.end());
	
	auto pos3 = std::find(coll.begin(), coll.end(), 3);
	
	std::reverse(pos3, coll.end());
	
	for (auto elem : coll)
	{
		std::cout << elem << ' ';
	}
	
	std::cout << std::endl;
}