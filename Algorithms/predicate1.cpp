#include <list>
#include <algorithm>
#include <iostream>
#include <cstdlib>

bool isPrime(int number)
{
	number = std::abs(number);
	
	if(number == 0 || number == 1)
	{
		return false;
	}
	
	int divisor;
	for(divisor = number/2; number%divisor != 0; --divisor)
	{
		;
	}
	
	return divisor == 1;
}

int main()
{
	std::list<int> coll;
	
	// insert elements from 24 to 30
	for(int i = 24; i <= 30; ++i)
		coll.push_back(i);
	
	// search for a prime number
	auto pos = find_if(coll.cbegin(), coll.cend(), isPrime);
	
	if(pos != coll.end())
		std::cout << *pos << " is the first prime number found" << std::endl;
	else
		std::cout << "no prime number found" << std::endl;
}