#include <set>
#include <string>
#include <iostream>


int main()
{
	std::multiset<std::string> cities {
		"Braunschweig", "Hanover", "Frankfurt", "New York",
        "Chicago", "Toronto", "Paris", "Frankfurt"
	};
	
	for(const auto& elem : cities) {
		std::cout << elem << ' ';
	}
	std::cout << std::endl;
	
	cities.insert( {"London", "Munich", "Hanover", "Braunschweig"} );
	
	for(const auto& elem : cities) {
		std::cout << elem << ' ';
	}
	std::cout << std::endl;
}