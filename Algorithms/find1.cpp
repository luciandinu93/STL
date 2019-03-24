#include <algorithm>
#include <list>
#include <iostream>

int main()
{
	std::list<int> coll;
	
	// insert elements from 20 to 40
	for(int i = 20; i <= 40; i++)
	{
		coll.push_back(i);
	}
	
	auto pos3 = std::find(coll.begin(), coll.end(), 3);
	
	// reverse the order of found element with the end
	std::reverse(pos3, coll.end());
	
	// find positions of value 25 and 35
	std::list<int>::iterator pos25, pos35;
	pos25 = std::find(coll.begin(), coll.end(), 25);
	pos35 = std::find(coll.begin(), coll.end(), 35);
	
	// print the max of coresponding range
	std::cout << "max: " << *std::max_element(pos25, pos35) << std::endl;
	
	// process the elements including the last position
	std::cout << "max: " << *std::max_element(pos25, ++pos35) << std::endl;
}