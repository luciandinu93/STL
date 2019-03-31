#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

int main()
{
	std::vector<std::string> sentence;
	
	sentence.reserve(5);
	
	sentence.push_back("Hello,");
	sentence.insert(sentence.end(), {"how", "are", "you", "?"});
	
	std::copy(sentence.cbegin(), sentence.cend(), 
				std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << std::endl;			
	
	std::cout << " max_size(): " << sentence.max_size() << std::endl;
	std::cout << " size(): " << sentence.size() << std::endl;
	std::cout << " capacity(): " << sentence.capacity() << std::endl;

	std::swap(sentence[1], sentence[3]);
	
	sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");
	
	sentence.back() = "!";
	
	std::copy(sentence.cbegin(), sentence.cend(),
				std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << std::endl;
	
	std::cout << " max_size(): " << sentence.max_size() << std::endl;
	std::cout << " size(): " << sentence.size() << std::endl;
	std::cout << " capacity(): " << sentence.capacity() << std::endl;
	
	sentence.pop_back();
	sentence.pop_back();
	sentence.shrink_to_fit();
	
	std::cout << " max_size(): " << sentence.max_size() << std::endl;
	std::cout << " size(): " << sentence.size() << std::endl;
	std::cout << " capacity(): " << sentence.capacity() << std::endl;
}