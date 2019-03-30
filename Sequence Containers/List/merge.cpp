#include <list>
#include <iostream>

template<class T>
void print(const T& start, const T& end)
{
	for(auto it = start; it != end; ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

// descending order
bool compare(int a, int b)
{
	if(a > b)
	{
		return true;
	}
	return false;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {6, 7, 8, 9, 10};
	std::list<int> l1(a, a+5);
	std::list<int> l2(b, b+5);
	print(l2.begin(), l2.end());
	
	// reverse order
	std::list<int> l3(l1.rbegin(), l1.rend());
	std::list<int> l4(l2.rbegin(), l2.rend());
	l2.merge(l1);
	print(l2.begin(), l2.end());
	
	std::cout << "Size of the source list l1: " << l1.size() << std::endl;
	
	l3.merge(l4, compare);
	print(l3.begin(), l3.end());
	std::cout << "Size of the source list l4: " << l4.size() << std::endl;
	
	return 0;
}