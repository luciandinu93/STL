#include <iterator>
#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> coll;
	
	for(int i = 1; i <= 9; ++i)
	{
		coll.push_back(i);
	}
	
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}