#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <iostream>

int main()
{
    std::list<int> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::vector<int> coll2;
    
    std::copy(coll1.cbegin(), coll1.cend(), std::back_inserter(coll2));

    std::deque<int> coll3;

    std::copy(coll1.cbegin(), coll1.cend(), std::front_inserter(coll3));

    std::set<int> coll4;

    std::copy(coll1.cbegin(), coll1.cend(), std::inserter(coll4, coll4.begin()));
}
