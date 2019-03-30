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
	print(l1.begin(), l1.end());
	
	// remove all '1'
	l1.remove(1);
	std::cout << "All '1' deleted" << std::endl;
	print(l1.begin(), l1.end());
	
	// remove all '2'
	l1.remove(2);
	std::cout << "All '2' deleted" << std::endl;
	print(l1.begin(), l1.end());
	
	// remove all '3'
	l1.remove(3);
	std::cout << "All '3' deleted" << std::endl;
	print(l1.begin(), l1.end());
}