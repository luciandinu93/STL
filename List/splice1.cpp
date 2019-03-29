#include <list>
#include <iostream>

template<class I>
void print (const I& start, const I& end)
{
	for(I it = start; it != end; ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {6, 7, 8, 9, 10};
	int c[] = {11, 12, 13, 14, 15};
	std::list<int> l1(a, a+5);
	std::list<int> l2(b, b+5);
	std::list<int> l3(c, c+5);
	
	l2.splice(l2.end(), l3);
	print(l2.begin(), l2.end());
	std::cout << "Size of the source list l3: " << l3.size() << std::endl;
	
	// moving one element
	std::list<int>::iterator it = l2.begin();
	std::advance(it, 9);
	l1.splice(l1.end(), l2, it);
	print(l1.begin(), l1.end());
	std::cout << "Size of source list l2: " << l2.size() << std::endl;
	
	// moving range of elements
	it = l1.end();
	std::advance(it, -1);
	l1.splice(it, l2, l2.begin(), l2.end());
	print(l1.begin(), l1.end());
	std::cout << "Size of the source list l2: " << l2.size() << std::endl;
}