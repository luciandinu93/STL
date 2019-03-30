#include <deque>
#include <iostream>

int main()
{
	std::deque<float> coll ; // deque container for floating point elements
	
	for(int i = 1; i <= 6; ++i)
	{
		coll.push_front(i*1.1);
	}
	
	for(int i = 0; i < coll.size(); ++i)
	{
		std::cout << coll[i] << ' ';
	}
	
	std::cout << std::endl;
	
	return 0;
}