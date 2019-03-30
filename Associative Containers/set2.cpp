#include <set>
#include <iostream>
#include <functional>

template <class T>
void print(T start, T end)
{
	while(start != end)
	{
		std::cout << *start << " ";
		start++;
	}
	std::cout << std::endl;
}

int main()
{
	int t[] = {1, 10, 8, 4, 6, 5, 3, 9, 7, 2};
	// default constructor
	std::set<int> s1;
	// iterator constructor
	std::set<int> s2(t, t+10);
	print(s2.begin(), s2.end());
	std::cout << std::endl;
	// copy constructor
	std::set<int> s3(s2);
	print(s3.begin(), s3.end());
	std::cout << std::endl;
	
	// different comparator
	std::set<int, std::greater<int>> s4 (t, t+10);
	print(s4.begin(), s4.end());
	std::cout << std::endl;
	
	// assignmnet
	std::set<int> s6;
	s6 = s3;
	print(s6.begin(), s6.end());
	std::cout << std::endl;
}