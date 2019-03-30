#include <iostream>
#include <set>
#include <functional>

template <class I>
print(const I& start, const I& end)
{
	for(auto it = start; it != end; ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main()
{
	int t[] = {2, 10, 8, 4, 5, 5, 3, 10, 7, 2};
	// default constructor
	std::multiset<int> s1;
	// iterator constructor
	std::multiset<int> s2(t, t+10);
	print(s2.begin(), s2.end());
	std::cout << std::endl;
	// copy constructor;
	std::multiset<int> s3(s2);
	print(s3.begin(), s3.end());
	std::cout << std::endl;
	// different comparator
	std::multiset<int, std::greater<int>> s4(t, t+10);
	print(s4.begin(), s4.end());
	std::cout << std::endl;
	// assignment
	std::multiset<int> s6;
	s6 = s3;
	print(s6.begin(), s6.end());
	std::cout << std::endl;
}