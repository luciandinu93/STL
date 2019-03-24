#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> coll;
	coll.push_back(2);
	coll.push_back(5);
	coll.push_back(4);
	coll.push_back(1);
	coll.push_back(6);
	coll.push_back(3);
	
	std::vector<int>::const_iterator minpos = std::min_element(coll.begin(), coll.end());
	std::cout << "min: " << *minpos << std::endl;
	std::vector<int>::const_iterator maxpos = std::max_element(coll.begin(), coll.end());
	std::cout << "max: " << *maxpos << std::endl;
	
	std::sort(coll.begin(), coll.end());
	
	std::vector<int>::iterator pos3;
	pos3 = std::find(coll.begin(), coll.end(), 3);
	
	std::reverse(pos3, coll.end());
	
	std::vector<int>::iterator pos;
	for(pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}