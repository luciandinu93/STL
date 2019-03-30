#include <list>
#include <iostream>

template<class I>
void print(const I& start, const I& end)
{
	for(I it = start; it != end; ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int a[] = {1,2,1,3,2,3,4,3,4,7,8,9,6,6,5,8,9,10};
	std::list<int> l1(a, a+18);
	std::list<int> l2(a, a+18);
	print(l1.begin(), l1.end());
	
	std::cout << "Deleting all subsequent duplicates" << std::endl;
	l1.unique();
	print(l1.begin(), l1.end());
	
	std::cout << "Deleting all subsequent duplicates from sorted list" << std::endl;
	l2.sort();
	l2.unique();
	print(l2.begin(), l2.end());
	
	return 0;
}