#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <deque>

int main()
{
	std::list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	std::vector<int> coll2;

    coll2.resize(coll1.size());
	
	std::copy(coll1.begin(), coll1.end(), coll2.begin());

    std::deque<int> coll3(coll1.size());

    std::copy(coll1.begin(), coll1.end(), coll3.begin());

}
