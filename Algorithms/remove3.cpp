#include <set>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
	std::set<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	// print all elements of the collection
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	
	// remove all elements equal with 3
	int num = coll.erase(3);
	
	// print numbers of removed elements
	std::cout << "Number of removed elements = " << num << std::endl;
	
	// print all elementes of modified collection
	std::copy(coll.cbegin(), coll.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}