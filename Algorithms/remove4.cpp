#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
	std::list<int> coll;
	
	// insert elements from 6 to 1 and from 1 to 6
	for(int i = 1; i <= 6; ++i)
	{
		coll.push_front(i);
		coll.push_back(i);
	}
	
	// remove all elementes with value = 3 (poor performance)
	coll.erase(std::remove(coll.begin(), coll.end(), 3), coll.end());
	std::copy(coll.begin(), coll.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	//remove all elements with value = 4 (good performance)
	coll.remove(4);
	std::copy(coll.begin(), coll.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}