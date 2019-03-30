#include <algorithm>
#include <iterator>
#include <list>
#include <iostream>

int main()
{
	std::list<int> coll;
	
	// insert elements from 6 -> 1 and from 1 -> 6
	for(int i = 1; i <= 6; ++i)
	{
		coll.push_back(i);
		coll.push_front(i);
	}
	
	// print all elements of the collection
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	
	std::list<int>::iterator end = std::remove(coll.begin(), coll.end(), 3);
	
	// print resulting elements of the collection
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	
	coll.erase(end, coll.end());
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}