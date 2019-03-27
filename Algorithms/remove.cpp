// remove.cpp
#include <algorithm>
#include <iterator>
#include <list>
#include <iostream>

int main()
{
	std::list<int> coll;
	
	for(int i = 1; i <= 6; i++) {
		coll.push_front(i);
		coll.push_back(i);
	}
	
	std::cout << "pre: ";
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	
	std::remove(coll.begin(), coll.end(), 3);
	
	std::cout << "post: ";
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}