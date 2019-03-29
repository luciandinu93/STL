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
	int a[]={1,2,1,3,2,3,4,7,8,9,6,5,8,9,10};
	
	std::list<int> l1(a, a+15);
	print(l1.begin(), l1.end());
	
	std::cout << "Reversing order" << std::endl;
	l1.reverse();
	print(l1.begin(), l1.end());
	
	return 0;
}