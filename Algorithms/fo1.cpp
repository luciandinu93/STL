#include <deque>
#include <algorithm>
#include <functional>
#include <iostream>
#include <string>

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
	std::deque<int> coll = { 1, 2, 3, 5, 7, 11, 13, 17, 19 };
	
	print(coll, "initialized: ");
	
	// negate all values in coll
	std::transform(coll.cbegin(), coll.cend(), coll.begin(), std::negate<int>());
	print(coll, "negated: ");
	
	// square all elements
	std::transform(coll.cbegin(), coll.cend(), coll.cbegin(), coll.begin(), std::multiplies<int>());
	print(coll, "squared: ");
}