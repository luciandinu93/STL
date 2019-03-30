#include <iostream>
#include <string>
#include <set>

template<typename T>
inline void PRINT_ELEMENTS(const T& coll, const std::string& optstr="")
{
	std::cout << optstr;
	for(const auto& elem : coll)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::set<int> coll = {4, 5 ,6, 1, 2, 9 ,0 -4};
	PRINT_ELEMENTS(coll, "all elements: ");
}