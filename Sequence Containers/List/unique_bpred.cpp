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

bool compareInt(double v1, double v2)
{
	if((int)v1 == (int)v2)
	{
		return true;
	}
	return false;
}

int main()
{
	double a[]={1.6,2.3,1.4,3.1,2.4,3.5,4.9,3.2,4.7,7.8,8,
        9.1,6.2,6.8,5.5,8.4,9.2,10};
	std::list<int> l1(a, a+18);
	std::list<int> l2(a, a+18);
	print(l1.begin(), l1.end());
	
	std::cout << "Deleting all subsequent duplicates - int comparison" << std::endl;
	l1.unique(compareInt);
	print(l1.begin(), l1.end());
	
	std::cout << "Deleting all subsequent duplicates sorted - int comparison" << std::endl;
	l2.sort();
	l2.unique(compareInt);
	print(l2.begin(), l2.end());
	
	return 0;
}