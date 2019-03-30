#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> coll;
	
	std::copy(std::istream_iterator<std::string>(std::cin), // start of source
			std::istream_iterator<std::string>(), // end of source
			std::back_inserter(coll)); // destination
	
	std::sort(coll.begin(), coll.end());
	
	std::unique_copy(coll.cbegin(), coll.cend(), std::ostream_iterator<std::string>(std::cout, "\n"));
}