#include <array>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <iostream>

template<typename I>
void print(const I& coll, const std::string optstr="")
{
	std::cout << optstr;
	for(const auto& elem : coll)
		std::cout << elem << " ";
	std::cout << std::endl;
}

int main()
{
	// create array with 10 ints
	std::array<int, 10> a = {10, 22, 33, 44};
	
	print(a, "initialized: ");
	
	// modify last two elements
	a.back() = 999999;
	a[a.size()-2] = 42;
	
	print(a, "modified: ");
	
	// process sum of all elements
	std::cout << "sum: " << std::accumulate(a.begin(), a.end(), 0) << std::endl;
	
	std::transform(a.begin(), a.end(), a.begin(), std::negate<int>());
	print(a, "negated: ");
}