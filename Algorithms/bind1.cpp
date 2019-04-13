#include <set>
#include <deque>
#include <algorithm>
#include <iterator>
#include <functional>
#include <iostream>


template<typename I>
void print(const I& coll, const std::string& optstr="")
{
	std::cout << optstr;
	for(const auto& elem : coll)
		std::cout << elem << " ";
	std::cout << std::endl;
}

int main()
{
	std::set<int, std::greater<int>> coll1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::deque<int> coll2;
	
	print(coll1, "initialized: ");
	
	std::transform(coll1.cbegin(), coll1.cend(), 
					std::back_inserter(coll2), 
					std::bind(std::multiplies<int>(), std::placeholders::_1, 10));
	
	print(coll2, "transformed: ");
	
	std::replace_if(coll2.begin(), coll2.end(), 
					std::bind(std::equal_to<int>(), std::placeholders::_1, 70),
					42);
	
	print(coll2, "replaced: ");
	
	coll2.erase(std::remove_if(coll2.begin(), coll2.end(),
								std::bind(std::logical_and<bool>(),
								std::bind(std::greater_equal<int>(), std::placeholders::_1, 50),
								std::bind(std::less_equal<int>(), std::placeholders::_1, 80))),
								coll2.end());
	
	print(coll2, "removed: ");
}