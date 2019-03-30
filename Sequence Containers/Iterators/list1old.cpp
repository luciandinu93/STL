#include <list>
#include <iostream>

int main()
{
	std::list<char> coll;
	
	for(char c = 'a'; c <= 'z'; ++c)
	{
		coll.push_back(c);
	}
	
	std::list<char>::const_iterator pos;
	for(pos = coll.begin(); pos != coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;
}